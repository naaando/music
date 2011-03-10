/* SimilarSongs.c generated by valac 0.11.6, the Vala compiler
 * generated from SimilarSongs.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gee.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libxml/parser.h>
#include <libxml/tree.h>


#define LAST_FM_TYPE_SIMILAR_SONGS (last_fm_similar_songs_get_type ())
#define LAST_FM_SIMILAR_SONGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LAST_FM_TYPE_SIMILAR_SONGS, LastFMSimilarSongs))
#define LAST_FM_SIMILAR_SONGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LAST_FM_TYPE_SIMILAR_SONGS, LastFMSimilarSongsClass))
#define LAST_FM_IS_SIMILAR_SONGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LAST_FM_TYPE_SIMILAR_SONGS))
#define LAST_FM_IS_SIMILAR_SONGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LAST_FM_TYPE_SIMILAR_SONGS))
#define LAST_FM_SIMILAR_SONGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LAST_FM_TYPE_SIMILAR_SONGS, LastFMSimilarSongsClass))

typedef struct _LastFMSimilarSongs LastFMSimilarSongs;
typedef struct _LastFMSimilarSongsClass LastFMSimilarSongsClass;
typedef struct _LastFMSimilarSongsPrivate LastFMSimilarSongsPrivate;

#define BEAT_BOX_TYPE_SONG (beat_box_song_get_type ())
#define BEAT_BOX_SONG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BEAT_BOX_TYPE_SONG, BeatBoxSong))
#define BEAT_BOX_SONG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BEAT_BOX_TYPE_SONG, BeatBoxSongClass))
#define BEAT_BOX_IS_SONG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BEAT_BOX_TYPE_SONG))
#define BEAT_BOX_IS_SONG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BEAT_BOX_TYPE_SONG))
#define BEAT_BOX_SONG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BEAT_BOX_TYPE_SONG, BeatBoxSongClass))

typedef struct _BeatBoxSong BeatBoxSong;
typedef struct _BeatBoxSongClass BeatBoxSongClass;

#define BEAT_BOX_TYPE_LIBRARY_MANAGER (beat_box_library_manager_get_type ())
#define BEAT_BOX_LIBRARY_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BEAT_BOX_TYPE_LIBRARY_MANAGER, BeatBoxLibraryManager))
#define BEAT_BOX_LIBRARY_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BEAT_BOX_TYPE_LIBRARY_MANAGER, BeatBoxLibraryManagerClass))
#define BEAT_BOX_IS_LIBRARY_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BEAT_BOX_TYPE_LIBRARY_MANAGER))
#define BEAT_BOX_IS_LIBRARY_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BEAT_BOX_TYPE_LIBRARY_MANAGER))
#define BEAT_BOX_LIBRARY_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BEAT_BOX_TYPE_LIBRARY_MANAGER, BeatBoxLibraryManagerClass))

typedef struct _BeatBoxLibraryManager BeatBoxLibraryManager;
typedef struct _BeatBoxLibraryManagerClass BeatBoxLibraryManagerClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _LastFMSimilarSongs {
	GObject parent_instance;
	LastFMSimilarSongsPrivate * priv;
};

struct _LastFMSimilarSongsClass {
	GObjectClass parent_class;
	void (*queryForSimilar) (LastFMSimilarSongs* self, BeatBoxSong* s);
};

struct _LastFMSimilarSongsPrivate {
	BeatBoxLibraryManager* _lm;
	BeatBoxSong* _base;
	gboolean working;
	GeeLinkedList* similar;
	BeatBoxSong* similarToAdd;
};


static gpointer last_fm_similar_songs_parent_class = NULL;

GType last_fm_similar_songs_get_type (void) G_GNUC_CONST;
GType beat_box_song_get_type (void) G_GNUC_CONST;
GType beat_box_library_manager_get_type (void) G_GNUC_CONST;
#define LAST_FM_SIMILAR_SONGS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), LAST_FM_TYPE_SIMILAR_SONGS, LastFMSimilarSongsPrivate))
enum  {
	LAST_FM_SIMILAR_SONGS_DUMMY_PROPERTY
};
LastFMSimilarSongs* last_fm_similar_songs_new (BeatBoxLibraryManager* lm);
LastFMSimilarSongs* last_fm_similar_songs_construct (GType object_type, BeatBoxLibraryManager* lm);
void last_fm_similar_songs_queryForSimilar (LastFMSimilarSongs* self, BeatBoxSong* s);
static void last_fm_similar_songs_real_queryForSimilar (LastFMSimilarSongs* self, BeatBoxSong* s);
void* last_fm_similar_songs_similar_thread_function (LastFMSimilarSongs* self);
static gpointer _last_fm_similar_songs_similar_thread_function_gthread_func (gpointer self);
void last_fm_similar_songs_getSimilarTracks (LastFMSimilarSongs* self, const gchar* title, const gchar* artist);
const gchar* beat_box_song_get_title (BeatBoxSong* self);
const gchar* beat_box_song_get_artist (BeatBoxSong* self);
static gboolean _lambda5_ (LastFMSimilarSongs* self);
static gboolean __lambda5__gsource_func (gpointer self);
gchar* last_fm_core_fix_for_url (const gchar* fix);
#define LAST_FM_CORE_api "a40ea1720028bd40c66b17d7146b3f3b"
void last_fm_similar_songs_parse_similar_nodes (LastFMSimilarSongs* self, xmlNode* node, const gchar* parent);
BeatBoxSong* beat_box_song_new (const gchar* file);
BeatBoxSong* beat_box_song_construct (GType object_type, const gchar* file);
void beat_box_song_set_title (BeatBoxSong* self, const gchar* value);
void beat_box_song_set_lastfm_url (BeatBoxSong* self, const gchar* value);
void beat_box_song_set_artist (BeatBoxSong* self, const gchar* value);
static void last_fm_similar_songs_finalize (GObject* obj);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


LastFMSimilarSongs* last_fm_similar_songs_construct (GType object_type, BeatBoxLibraryManager* lm) {
	LastFMSimilarSongs * self = NULL;
	BeatBoxLibraryManager* _tmp0_;
	BeatBoxLibraryManager* _tmp1_;
	g_return_val_if_fail (lm != NULL, NULL);
	self = (LastFMSimilarSongs*) g_object_new (object_type, NULL);
	_tmp0_ = _g_object_ref0 (lm);
	_tmp1_ = _tmp0_;
	_g_object_unref0 (self->priv->_lm);
	self->priv->_lm = _tmp1_;
	self->priv->working = FALSE;
	return self;
}


LastFMSimilarSongs* last_fm_similar_songs_new (BeatBoxLibraryManager* lm) {
	return last_fm_similar_songs_construct (LAST_FM_TYPE_SIMILAR_SONGS, lm);
}


static gpointer _last_fm_similar_songs_similar_thread_function_gthread_func (gpointer self) {
	gpointer result;
	result = last_fm_similar_songs_similar_thread_function (self);
	return result;
}


static void last_fm_similar_songs_real_queryForSimilar (LastFMSimilarSongs* self, BeatBoxSong* s) {
	BeatBoxSong* _tmp0_;
	BeatBoxSong* _tmp1_;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (s != NULL);
	_tmp0_ = _g_object_ref0 (s);
	_tmp1_ = _tmp0_;
	_g_object_unref0 (self->priv->_base);
	self->priv->_base = _tmp1_;
	if (!self->priv->working) {
		self->priv->working = TRUE;
		g_thread_create (_last_fm_similar_songs_similar_thread_function_gthread_func, self, FALSE, &_inner_error_);
		if (_inner_error_ != NULL) {
			if (_inner_error_->domain == G_THREAD_ERROR) {
				goto __catch65_g_thread_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
		goto __finally65;
		__catch65_g_thread_error:
		{
			GError * err;
			err = _inner_error_;
			_inner_error_ = NULL;
			fprintf (stdout, "ERROR: Could not create similar thread: %s \n", err->message);
			_g_error_free0 (err);
		}
		__finally65:
		if (_inner_error_ != NULL) {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
	}
}


void last_fm_similar_songs_queryForSimilar (LastFMSimilarSongs* self, BeatBoxSong* s) {
	LAST_FM_SIMILAR_SONGS_GET_CLASS (self)->queryForSimilar (self, s);
}


static gboolean _lambda5_ (LastFMSimilarSongs* self) {
	gboolean result = FALSE;
	g_signal_emit_by_name (self, "similar-retrieved", self->priv->similar);
	result = FALSE;
	return result;
}


static gboolean __lambda5__gsource_func (gpointer self) {
	gboolean result;
	result = _lambda5_ (self);
	return result;
}


void* last_fm_similar_songs_similar_thread_function (LastFMSimilarSongs* self) {
	void* result = NULL;
	GeeLinkedList* _tmp0_ = NULL;
	GeeLinkedList* _tmp1_;
	const gchar* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = gee_linked_list_new (BEAT_BOX_TYPE_SONG, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL);
	_tmp1_ = _tmp0_;
	_g_object_unref0 (self->priv->similar);
	self->priv->similar = _tmp1_;
	_tmp2_ = beat_box_song_get_title (self->priv->_base);
	_tmp3_ = beat_box_song_get_artist (self->priv->_base);
	last_fm_similar_songs_getSimilarTracks (self, _tmp2_, _tmp3_);
	gee_abstract_collection_add ((GeeAbstractCollection*) self->priv->similar, self->priv->_base);
	g_idle_add_full (G_PRIORITY_DEFAULT_IDLE, __lambda5__gsource_func, g_object_ref (self), g_object_unref);
	self->priv->working = FALSE;
	result = NULL;
	return result;
}


/** Gets similar songs
 * @param artist The artist of song to get similar to
 * @param title The title of song to get similar to
 * @return The songs that are similar
 */
void last_fm_similar_songs_getSimilarTracks (LastFMSimilarSongs* self, const gchar* title, const gchar* artist) {
	gchar* _tmp0_ = NULL;
	gchar* artist_fixed;
	gchar* _tmp1_ = NULL;
	gchar* title_fixed;
	gchar* _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* _tmp5_;
	gchar* _tmp6_;
	gchar* url;
	xmlDoc* _tmp7_ = NULL;
	xmlDoc* doc;
	g_return_if_fail (self != NULL);
	g_return_if_fail (title != NULL);
	g_return_if_fail (artist != NULL);
	_tmp0_ = last_fm_core_fix_for_url (artist);
	artist_fixed = _tmp0_;
	_tmp1_ = last_fm_core_fix_for_url (title);
	title_fixed = _tmp1_;
	_tmp2_ = g_strconcat ("http://ws.audioscrobbler.com/2.0/?method=track.getsimilar&artist=", artist_fixed, NULL);
	_tmp3_ = g_strconcat (_tmp2_, "&track=", NULL);
	_tmp4_ = g_strconcat (_tmp3_, title_fixed, NULL);
	_tmp5_ = g_strconcat (_tmp4_, "&api_key=", NULL);
	url = (_tmp6_ = g_strconcat (_tmp5_, LAST_FM_CORE_api, NULL), _g_free0 (_tmp5_), _g_free0 (_tmp4_), _g_free0 (_tmp3_), _g_free0 (_tmp2_), _tmp6_);
	_tmp7_ = xmlParseFile (url);
	doc = _tmp7_;
	if (doc == NULL) {
		fprintf (stdout, "Could not load similar artist information for %s by %s\n", title, artist);
	} else {
		xmlNode* _tmp8_ = NULL;
		_tmp8_ = xmlDocGetRootElement (doc);
		if (_tmp8_ == NULL) {
			fprintf (stdout, "Oddly, similar artist information was invalid\n");
		} else {
			BeatBoxSong* _tmp9_;
			xmlNode* _tmp10_ = NULL;
			_tmp9_ = NULL;
			_g_object_unref0 (self->priv->similarToAdd);
			self->priv->similarToAdd = _tmp9_;
			_tmp10_ = xmlDocGetRootElement (doc);
			last_fm_similar_songs_parse_similar_nodes (self, _tmp10_, "");
		}
	}
	xmlFreeDoc (doc);
	_g_free0 (url);
	_g_free0 (title_fixed);
	_g_free0 (artist_fixed);
}


void last_fm_similar_songs_parse_similar_nodes (LastFMSimilarSongs* self, xmlNode* node, const gchar* parent) {
	xmlNode* iter = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (parent != NULL);
	{
		gboolean _tmp0_;
		iter = node->children;
		_tmp0_ = TRUE;
		while (TRUE) {
			gchar* _tmp1_;
			gchar* node_name;
			gchar* _tmp2_ = NULL;
			gchar* node_content;
			gchar* _tmp5_;
			if (!_tmp0_) {
				iter = iter->next;
			}
			_tmp0_ = FALSE;
			if (!(iter != NULL)) {
				break;
			}
			if (iter->type != XML_ELEMENT_NODE) {
				continue;
			}
			_tmp1_ = g_strdup (iter->name);
			node_name = _tmp1_;
			_tmp2_ = xmlNodeGetContent (iter);
			node_content = _tmp2_;
			if (g_strcmp0 (parent, "similartrackstrack") == 0) {
				if (g_strcmp0 (node_name, "name") == 0) {
					BeatBoxSong* _tmp3_ = NULL;
					BeatBoxSong* _tmp4_;
					if (self->priv->similarToAdd != NULL) {
						gee_abstract_collection_add ((GeeAbstractCollection*) self->priv->similar, self->priv->similarToAdd);
					}
					_tmp3_ = beat_box_song_new ("");
					_tmp4_ = _tmp3_;
					_g_object_unref0 (self->priv->similarToAdd);
					self->priv->similarToAdd = _tmp4_;
					beat_box_song_set_title (self->priv->similarToAdd, node_content);
				} else {
					if (g_strcmp0 (node_name, "url") == 0) {
						beat_box_song_set_lastfm_url (self->priv->similarToAdd, node_content);
					}
				}
			} else {
				if (g_strcmp0 (parent, "similartrackstrackartist") == 0) {
					if (g_strcmp0 (node_name, "name") == 0) {
						beat_box_song_set_artist (self->priv->similarToAdd, node_content);
					}
				}
			}
			_tmp5_ = g_strconcat (parent, node_name, NULL);
			last_fm_similar_songs_parse_similar_nodes (self, iter, _tmp5_);
			_g_free0 (_tmp5_);
			_g_free0 (node_content);
			_g_free0 (node_name);
		}
	}
	xmlFreeNode (iter);
}


static void last_fm_similar_songs_class_init (LastFMSimilarSongsClass * klass) {
	last_fm_similar_songs_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (LastFMSimilarSongsPrivate));
	LAST_FM_SIMILAR_SONGS_CLASS (klass)->queryForSimilar = last_fm_similar_songs_real_queryForSimilar;
	G_OBJECT_CLASS (klass)->finalize = last_fm_similar_songs_finalize;
	g_signal_new ("similar_retrieved", LAST_FM_TYPE_SIMILAR_SONGS, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__OBJECT, G_TYPE_NONE, 1, GEE_TYPE_LINKED_LIST);
}


static void last_fm_similar_songs_instance_init (LastFMSimilarSongs * self) {
	self->priv = LAST_FM_SIMILAR_SONGS_GET_PRIVATE (self);
}


static void last_fm_similar_songs_finalize (GObject* obj) {
	LastFMSimilarSongs * self;
	self = LAST_FM_SIMILAR_SONGS (obj);
	_g_object_unref0 (self->priv->_lm);
	_g_object_unref0 (self->priv->_base);
	_g_object_unref0 (self->priv->similar);
	_g_object_unref0 (self->priv->similarToAdd);
	G_OBJECT_CLASS (last_fm_similar_songs_parent_class)->finalize (obj);
}


GType last_fm_similar_songs_get_type (void) {
	static volatile gsize last_fm_similar_songs_type_id__volatile = 0;
	if (g_once_init_enter (&last_fm_similar_songs_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (LastFMSimilarSongsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) last_fm_similar_songs_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LastFMSimilarSongs), 0, (GInstanceInitFunc) last_fm_similar_songs_instance_init, NULL };
		GType last_fm_similar_songs_type_id;
		last_fm_similar_songs_type_id = g_type_register_static (G_TYPE_OBJECT, "LastFMSimilarSongs", &g_define_type_info, 0);
		g_once_init_leave (&last_fm_similar_songs_type_id__volatile, last_fm_similar_songs_type_id);
	}
	return last_fm_similar_songs_type_id__volatile;
}



