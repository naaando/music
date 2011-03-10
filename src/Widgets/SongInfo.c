/* SongInfo.c generated by valac 0.11.6, the Vala compiler
 * generated from SongInfo.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>


#define BEAT_BOX_TYPE_SONG_INFO (beat_box_song_info_get_type ())
#define BEAT_BOX_SONG_INFO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BEAT_BOX_TYPE_SONG_INFO, BeatBoxSongInfo))
#define BEAT_BOX_SONG_INFO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BEAT_BOX_TYPE_SONG_INFO, BeatBoxSongInfoClass))
#define BEAT_BOX_IS_SONG_INFO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BEAT_BOX_TYPE_SONG_INFO))
#define BEAT_BOX_IS_SONG_INFO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BEAT_BOX_TYPE_SONG_INFO))
#define BEAT_BOX_SONG_INFO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BEAT_BOX_TYPE_SONG_INFO, BeatBoxSongInfoClass))

typedef struct _BeatBoxSongInfo BeatBoxSongInfo;
typedef struct _BeatBoxSongInfoClass BeatBoxSongInfoClass;
typedef struct _BeatBoxSongInfoPrivate BeatBoxSongInfoPrivate;

#define BEAT_BOX_TYPE_SONG (beat_box_song_get_type ())
#define BEAT_BOX_SONG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BEAT_BOX_TYPE_SONG, BeatBoxSong))
#define BEAT_BOX_SONG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BEAT_BOX_TYPE_SONG, BeatBoxSongClass))
#define BEAT_BOX_IS_SONG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BEAT_BOX_TYPE_SONG))
#define BEAT_BOX_IS_SONG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BEAT_BOX_TYPE_SONG))
#define BEAT_BOX_SONG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BEAT_BOX_TYPE_SONG, BeatBoxSongClass))

typedef struct _BeatBoxSong BeatBoxSong;
typedef struct _BeatBoxSongClass BeatBoxSongClass;

#define LAST_FM_TYPE_ARTIST_INFO (last_fm_artist_info_get_type ())
#define LAST_FM_ARTIST_INFO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LAST_FM_TYPE_ARTIST_INFO, LastFMArtistInfo))
#define LAST_FM_ARTIST_INFO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LAST_FM_TYPE_ARTIST_INFO, LastFMArtistInfoClass))
#define LAST_FM_IS_ARTIST_INFO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LAST_FM_TYPE_ARTIST_INFO))
#define LAST_FM_IS_ARTIST_INFO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LAST_FM_TYPE_ARTIST_INFO))
#define LAST_FM_ARTIST_INFO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LAST_FM_TYPE_ARTIST_INFO, LastFMArtistInfoClass))

typedef struct _LastFMArtistInfo LastFMArtistInfo;
typedef struct _LastFMArtistInfoClass LastFMArtistInfoClass;

#define LAST_FM_TYPE_TRACK_INFO (last_fm_track_info_get_type ())
#define LAST_FM_TRACK_INFO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LAST_FM_TYPE_TRACK_INFO, LastFMTrackInfo))
#define LAST_FM_TRACK_INFO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LAST_FM_TYPE_TRACK_INFO, LastFMTrackInfoClass))
#define LAST_FM_IS_TRACK_INFO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LAST_FM_TYPE_TRACK_INFO))
#define LAST_FM_IS_TRACK_INFO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LAST_FM_TYPE_TRACK_INFO))
#define LAST_FM_TRACK_INFO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LAST_FM_TYPE_TRACK_INFO, LastFMTrackInfoClass))

typedef struct _LastFMTrackInfo LastFMTrackInfo;
typedef struct _LastFMTrackInfoClass LastFMTrackInfoClass;

#define LAST_FM_TYPE_ALBUM_INFO (last_fm_album_info_get_type ())
#define LAST_FM_ALBUM_INFO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LAST_FM_TYPE_ALBUM_INFO, LastFMAlbumInfo))
#define LAST_FM_ALBUM_INFO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LAST_FM_TYPE_ALBUM_INFO, LastFMAlbumInfoClass))
#define LAST_FM_IS_ALBUM_INFO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LAST_FM_TYPE_ALBUM_INFO))
#define LAST_FM_IS_ALBUM_INFO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LAST_FM_TYPE_ALBUM_INFO))
#define LAST_FM_ALBUM_INFO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LAST_FM_TYPE_ALBUM_INFO, LastFMAlbumInfoClass))

typedef struct _LastFMAlbumInfo LastFMAlbumInfo;
typedef struct _LastFMAlbumInfoClass LastFMAlbumInfoClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

#define LAST_FM_TYPE_IMAGE (last_fm_image_get_type ())
#define LAST_FM_IMAGE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LAST_FM_TYPE_IMAGE, LastFMImage))
#define LAST_FM_IMAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LAST_FM_TYPE_IMAGE, LastFMImageClass))
#define LAST_FM_IS_IMAGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LAST_FM_TYPE_IMAGE))
#define LAST_FM_IS_IMAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LAST_FM_TYPE_IMAGE))
#define LAST_FM_IMAGE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LAST_FM_TYPE_IMAGE, LastFMImageClass))

typedef struct _LastFMImage LastFMImage;
typedef struct _LastFMImageClass LastFMImageClass;

#define LAST_FM_TYPE_TAG (last_fm_tag_get_type ())
#define LAST_FM_TAG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LAST_FM_TYPE_TAG, LastFMTag))
#define LAST_FM_TAG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LAST_FM_TYPE_TAG, LastFMTagClass))
#define LAST_FM_IS_TAG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LAST_FM_TYPE_TAG))
#define LAST_FM_IS_TAG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LAST_FM_TYPE_TAG))
#define LAST_FM_TAG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LAST_FM_TYPE_TAG, LastFMTagClass))

typedef struct _LastFMTag LastFMTag;
typedef struct _LastFMTagClass LastFMTagClass;

struct _BeatBoxSongInfo {
	GObject parent_instance;
	BeatBoxSongInfoPrivate * priv;
	BeatBoxSong* song;
	LastFMArtistInfo* artist;
	LastFMTrackInfo* track;
	LastFMAlbumInfo* album;
};

struct _BeatBoxSongInfoClass {
	GObjectClass parent_class;
};

struct _BeatBoxSongInfoPrivate {
	GFile* file;
};


static gpointer beat_box_song_info_parent_class = NULL;

GType beat_box_song_info_get_type (void) G_GNUC_CONST;
GType beat_box_song_get_type (void) G_GNUC_CONST;
GType last_fm_artist_info_get_type (void) G_GNUC_CONST;
GType last_fm_track_info_get_type (void) G_GNUC_CONST;
GType last_fm_album_info_get_type (void) G_GNUC_CONST;
#define BEAT_BOX_SONG_INFO_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), BEAT_BOX_TYPE_SONG_INFO, BeatBoxSongInfoPrivate))
enum  {
	BEAT_BOX_SONG_INFO_DUMMY_PROPERTY
};
BeatBoxSongInfo* beat_box_song_info_new (void);
BeatBoxSongInfo* beat_box_song_info_construct (GType object_type);
LastFMArtistInfo* last_fm_artist_info_new_basic (void);
LastFMArtistInfo* last_fm_artist_info_construct_basic (GType object_type);
LastFMTrackInfo* last_fm_track_info_new (void);
LastFMTrackInfo* last_fm_track_info_construct (GType object_type);
LastFMAlbumInfo* last_fm_album_info_new_basic (void);
LastFMAlbumInfo* last_fm_album_info_construct_basic (GType object_type);
gchar* beat_box_song_info_update_file (BeatBoxSongInfo* self, LastFMArtistInfo* art, LastFMTrackInfo* tra, LastFMAlbumInfo* alb, BeatBoxSong* s);
gchar* beat_box_song_info_generate_html (BeatBoxSongInfo* self);
GType last_fm_image_get_type (void) G_GNUC_CONST;
LastFMImage* last_fm_album_info_get_url_image (LastFMAlbumInfo* self);
const gchar* last_fm_image_get_url (LastFMImage* self);
const gchar* last_fm_track_info_get_name (LastFMTrackInfo* self);
const gchar* last_fm_artist_info_get_name (LastFMArtistInfo* self);
const gchar* last_fm_album_info_get_name (LastFMAlbumInfo* self);
gint last_fm_track_info_get_listeners (LastFMTrackInfo* self);
gint last_fm_track_info_get_playcount (LastFMTrackInfo* self);
GType last_fm_tag_get_type (void) G_GNUC_CONST;
GeeArrayList* last_fm_track_info_tags (LastFMTrackInfo* self);
const gchar* last_fm_tag_get_url (LastFMTag* self);
const gchar* last_fm_tag_get_tag (LastFMTag* self);
GeeArrayList* last_fm_artist_info_similarArtists (LastFMArtistInfo* self);
const gchar* last_fm_artist_info_get_url (LastFMArtistInfo* self);
const gchar* last_fm_track_info_get_summary (LastFMTrackInfo* self);
LastFMImage* last_fm_artist_info_get_url_image (LastFMArtistInfo* self);
const gchar* last_fm_artist_info_get_summary (LastFMArtistInfo* self);
static void beat_box_song_info_finalize (GObject* obj);


BeatBoxSongInfo* beat_box_song_info_construct (GType object_type) {
	BeatBoxSongInfo * self = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_;
	GFile* _tmp2_ = NULL;
	GFile* _tmp3_;
	GFile* beatbox_folder;
	gboolean _tmp4_;
	gchar* _tmp5_ = NULL;
	gchar* _tmp6_;
	gchar* _tmp7_;
	GFile* _tmp8_ = NULL;
	GFile* _tmp9_;
	gboolean _tmp10_;
	LastFMArtistInfo* _tmp13_ = NULL;
	LastFMArtistInfo* _tmp14_;
	LastFMTrackInfo* _tmp15_ = NULL;
	LastFMTrackInfo* _tmp16_;
	LastFMAlbumInfo* _tmp17_ = NULL;
	LastFMAlbumInfo* _tmp18_;
	GError * _inner_error_ = NULL;
	self = (BeatBoxSongInfo*) g_object_new (object_type, NULL);
	_tmp0_ = g_get_user_cache_dir ();
	_tmp1_ = g_strconcat (_tmp0_, "/beatbox", NULL);
	_tmp2_ = g_file_new_for_path (_tmp1_);
	beatbox_folder = (_tmp3_ = _tmp2_, _g_free0 (_tmp1_), _tmp3_);
	_tmp4_ = g_file_query_exists (beatbox_folder, NULL);
	if (!_tmp4_) {
		g_file_make_directory (beatbox_folder, NULL, &_inner_error_);
		if (_inner_error_ != NULL) {
			goto __catch71_g_error;
		}
		goto __finally71;
		__catch71_g_error:
		{
			GError * err;
			err = _inner_error_;
			_inner_error_ = NULL;
			fprintf (stdout, "CRITICAL: Could not make song info directory in cache: %s\n", err->message);
			_g_error_free0 (err);
		}
		__finally71:
		if (_inner_error_ != NULL) {
			_g_object_unref0 (beatbox_folder);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
	}
	_tmp5_ = g_file_get_path (beatbox_folder);
	_tmp6_ = _tmp5_;
	_tmp7_ = g_strconcat (_tmp6_, "/beatbox_song_info.html", NULL);
	_tmp8_ = g_file_new_for_path (_tmp7_);
	_tmp9_ = _tmp8_;
	_g_object_unref0 (self->priv->file);
	self->priv->file = _tmp9_;
	_g_free0 (_tmp7_);
	_g_free0 (_tmp6_);
	_tmp10_ = g_file_query_exists (self->priv->file, NULL);
	if (!_tmp10_) {
		GFileOutputStream* _tmp11_ = NULL;
		GFileOutputStream* _tmp12_;
		fprintf (stdout, "Creating song info file \n");
		_tmp11_ = g_file_create (self->priv->file, G_FILE_CREATE_NONE, NULL, &_inner_error_);
		_tmp12_ = _tmp11_;
		_g_object_unref0 (_tmp12_);
		if (_inner_error_ != NULL) {
			goto __catch72_g_error;
		}
		goto __finally72;
		__catch72_g_error:
		{
			GError * err;
			err = _inner_error_;
			_inner_error_ = NULL;
			fprintf (stdout, "Could not create song info file: %s\n", err->message);
			_g_error_free0 (err);
		}
		__finally72:
		if (_inner_error_ != NULL) {
			_g_object_unref0 (beatbox_folder);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
	}
	_tmp13_ = last_fm_artist_info_new_basic ();
	_tmp14_ = _tmp13_;
	_g_object_unref0 (self->artist);
	self->artist = _tmp14_;
	_tmp15_ = last_fm_track_info_new ();
	_tmp16_ = _tmp15_;
	_g_object_unref0 (self->track);
	self->track = _tmp16_;
	_tmp17_ = last_fm_album_info_new_basic ();
	_tmp18_ = _tmp17_;
	_g_object_unref0 (self->album);
	self->album = _tmp18_;
	_g_object_unref0 (beatbox_folder);
	return self;
}


BeatBoxSongInfo* beat_box_song_info_new (void) {
	return beat_box_song_info_construct (BEAT_BOX_TYPE_SONG_INFO);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


gchar* beat_box_song_info_update_file (BeatBoxSongInfo* self, LastFMArtistInfo* art, LastFMTrackInfo* tra, LastFMAlbumInfo* alb, BeatBoxSong* s) {
	gchar* result = NULL;
	BeatBoxSong* _tmp0_;
	BeatBoxSong* _tmp1_;
	LastFMArtistInfo* _tmp2_;
	LastFMArtistInfo* _tmp3_;
	LastFMTrackInfo* _tmp4_;
	LastFMTrackInfo* _tmp5_;
	LastFMAlbumInfo* _tmp6_;
	LastFMAlbumInfo* _tmp7_;
	gchar* _tmp8_ = NULL;
	gchar* html;
	const gchar* _tmp9_ = NULL;
	gchar* _tmp10_;
	GFile* _tmp11_ = NULL;
	GFile* _tmp12_;
	GFileOutputStream* _tmp13_ = NULL;
	GFileOutputStream* file_stream;
	GDataOutputStream* _tmp14_ = NULL;
	GDataOutputStream* data_stream;
	const gchar* _tmp15_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (art != NULL, NULL);
	g_return_val_if_fail (tra != NULL, NULL);
	g_return_val_if_fail (alb != NULL, NULL);
	g_return_val_if_fail (s != NULL, NULL);
	_tmp0_ = _g_object_ref0 (s);
	_tmp1_ = _tmp0_;
	_g_object_unref0 (self->song);
	self->song = _tmp1_;
	_tmp2_ = _g_object_ref0 (art);
	_tmp3_ = _tmp2_;
	_g_object_unref0 (self->artist);
	self->artist = _tmp3_;
	_tmp4_ = _g_object_ref0 (tra);
	_tmp5_ = _tmp4_;
	_g_object_unref0 (self->track);
	self->track = _tmp5_;
	_tmp6_ = _g_object_ref0 (alb);
	_tmp7_ = _tmp6_;
	_g_object_unref0 (self->album);
	self->album = _tmp7_;
	_tmp8_ = beat_box_song_info_generate_html (self);
	html = _tmp8_;
	g_file_delete (self->priv->file, NULL, &_inner_error_);
	if (_inner_error_ != NULL) {
		goto __catch73_g_error;
	}
	_tmp9_ = g_get_user_cache_dir ();
	_tmp10_ = g_strconcat (_tmp9_, "/beatbox/beatbox_song_info.html", NULL);
	_tmp11_ = g_file_new_for_path (_tmp10_);
	_tmp12_ = _tmp11_;
	_g_object_unref0 (self->priv->file);
	self->priv->file = _tmp12_;
	_g_free0 (_tmp10_);
	_tmp13_ = g_file_create (self->priv->file, G_FILE_CREATE_NONE, NULL, &_inner_error_);
	file_stream = _tmp13_;
	if (_inner_error_ != NULL) {
		goto __catch73_g_error;
	}
	_tmp14_ = g_data_output_stream_new ((GOutputStream*) file_stream);
	data_stream = _tmp14_;
	g_data_output_stream_put_string (data_stream, html, NULL, &_inner_error_);
	if (_inner_error_ != NULL) {
		_g_object_unref0 (data_stream);
		_g_object_unref0 (file_stream);
		goto __catch73_g_error;
	}
	_g_object_unref0 (data_stream);
	_g_object_unref0 (file_stream);
	goto __finally73;
	__catch73_g_error:
	{
		GError * err;
		err = _inner_error_;
		_inner_error_ = NULL;
		fprintf (stdout, "Could not refresh song info view with new song: %s\n", err->message);
		_g_error_free0 (err);
	}
	__finally73:
	if (_inner_error_ != NULL) {
		_g_free0 (html);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	_tmp15_ = g_get_user_cache_dir ();
	result = g_strconcat (_tmp15_, "/beatbox_song_info.html", NULL);
	_g_free0 (html);
	return result;
}


static gchar* string_substring (const gchar* self, glong offset, glong len) {
	gchar* result = NULL;
	glong string_length = 0L;
	gboolean _tmp0_ = FALSE;
	gchar* _tmp3_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	if (offset >= 0) {
		_tmp0_ = len >= 0;
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		glong _tmp1_;
		_tmp1_ = strnlen ((gchar*) self, (gsize) (offset + len));
		string_length = _tmp1_;
	} else {
		gint _tmp2_;
		_tmp2_ = strlen (self);
		string_length = (glong) _tmp2_;
	}
	if (offset < 0) {
		offset = string_length + offset;
		g_return_val_if_fail (offset >= 0, NULL);
	} else {
		g_return_val_if_fail (offset <= string_length, NULL);
	}
	if (len < 0) {
		len = string_length - offset;
	}
	g_return_val_if_fail ((offset + len) <= string_length, NULL);
	_tmp3_ = g_strndup (((gchar*) self) + offset, (gsize) len);
	result = _tmp3_;
	return result;
}


gchar* beat_box_song_info_generate_html (BeatBoxSongInfo* self) {
	gchar* result = NULL;
	gchar* rv = NULL;
	gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* _tmp5_;
	gchar* _tmp6_;
	gchar* _tmp7_;
	gchar* _tmp8_;
	gchar* _tmp9_;
	gchar* _tmp10_;
	gchar* _tmp11_;
	gchar* _tmp12_;
	gchar* _tmp13_;
	gchar* _tmp14_;
	gchar* _tmp15_;
	gchar* _tmp16_;
	gchar* _tmp17_;
	gchar* _tmp18_;
	gchar* _tmp19_;
	gchar* _tmp20_;
	gchar* _tmp21_;
	gchar* _tmp22_;
	gchar* _tmp23_;
	gchar* _tmp24_;
	gchar* _tmp25_;
	gchar* _tmp26_;
	gchar* _tmp27_;
	gchar* _tmp28_;
	gchar* _tmp29_;
	gchar* _tmp30_;
	gchar* _tmp31_;
	gchar* _tmp32_;
	gchar* _tmp33_;
	gchar* _tmp34_;
	gchar* _tmp35_;
	gchar* _tmp36_;
	gchar* _tmp37_;
	gchar* _tmp38_;
	gchar* _tmp39_;
	gchar* _tmp40_;
	gchar* _tmp41_;
	gchar* _tmp42_;
	gchar* _tmp43_;
	gchar* _tmp44_;
	gchar* _tmp45_;
	gchar* _tmp46_;
	gchar* _tmp47_;
	gchar* _tmp48_;
	gchar* _tmp49_;
	gchar* _tmp50_;
	gchar* _tmp51_;
	gchar* _tmp52_;
	gchar* _tmp53_;
	gchar* _tmp54_;
	gchar* _tmp55_;
	gchar* _tmp56_;
	gchar* _tmp57_;
	gchar* _tmp58_;
	gchar* _tmp59_;
	gchar* _tmp60_;
	gchar* _tmp61_;
	gchar* _tmp62_;
	gchar* _tmp63_;
	LastFMImage* _tmp64_ = NULL;
	LastFMImage* _tmp65_;
	LastFMImage* big;
	const gchar* _tmp66_ = NULL;
	gchar* _tmp67_;
	gchar* _tmp68_;
	gchar* _tmp69_;
	const gchar* _tmp70_ = NULL;
	gchar* _tmp71_;
	gchar* _tmp72_;
	gchar* _tmp73_;
	const gchar* _tmp74_ = NULL;
	gchar* _tmp75_;
	gchar* _tmp76_;
	gchar* _tmp77_;
	const gchar* _tmp78_ = NULL;
	gchar* _tmp79_;
	gchar* _tmp80_;
	gchar* _tmp81_;
	gchar* _tmp82_;
	gchar* _tmp83_;
	gchar* _tmp84_;
	gchar* _tmp85_;
	gint _tmp86_;
	gchar* _tmp87_ = NULL;
	gchar* _tmp88_;
	gchar* _tmp89_;
	gchar* _tmp90_;
	gchar* _tmp91_;
	gint _tmp92_;
	gchar* _tmp93_ = NULL;
	gchar* _tmp94_;
	gchar* _tmp95_;
	gchar* _tmp96_;
	gchar* _tmp97_;
	gchar* _tmp98_;
	gchar* _tmp99_;
	gchar* tags;
	gint _tmp110_;
	gchar* _tmp111_ = NULL;
	gchar* _tmp112_;
	gchar* _tmp113_;
	gchar* _tmp114_;
	gchar* _tmp115_;
	gchar* _tmp116_;
	gchar* sim;
	gint _tmp127_;
	gchar* _tmp128_ = NULL;
	gchar* _tmp129_;
	gchar* _tmp130_;
	gchar* _tmp131_;
	gchar* _tmp132_;
	gchar* _tmp133_;
	gchar* _tmp134_;
	const gchar* _tmp135_ = NULL;
	gchar* _tmp136_;
	gchar* _tmp137_;
	gchar* _tmp138_;
	gchar* _tmp139_;
	gchar* _tmp140_;
	LastFMImage* _tmp141_ = NULL;
	LastFMImage* _tmp142_;
	LastFMImage* _tmp143_;
	const gchar* _tmp144_ = NULL;
	gchar* _tmp145_;
	gchar* _tmp146_;
	gchar* _tmp147_;
	const gchar* _tmp148_ = NULL;
	gchar* _tmp149_;
	gchar* _tmp150_;
	gchar* _tmp151_;
	gchar* _tmp152_;
	gchar* _tmp153_;
	gchar* _tmp154_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = g_strdup ("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\" \"htt" \
"p://www.w3.org/TR/html4/loose.dtd\">");
	_tmp1_ = _tmp0_;
	_g_free0 (rv);
	rv = _tmp1_;
	_tmp2_ = g_strconcat (rv, "<html>", NULL);
	_g_free0 (rv);
	rv = _tmp2_;
	_tmp3_ = g_strconcat (rv, "<head>", NULL);
	_g_free0 (rv);
	rv = _tmp3_;
	_tmp4_ = g_strconcat (rv, "<style type=\"text/css\">", NULL);
	_g_free0 (rv);
	rv = _tmp4_;
	_tmp5_ = g_strconcat (rv, "* {", NULL);
	_g_free0 (rv);
	rv = _tmp5_;
	_tmp6_ = g_strconcat (rv, "padding:0 0 0 0;", NULL);
	_g_free0 (rv);
	rv = _tmp6_;
	_tmp7_ = g_strconcat (rv, "margin: 0 0 0 0", NULL);
	_g_free0 (rv);
	rv = _tmp7_;
	_tmp8_ = g_strconcat (rv, "background-color: #000;", NULL);
	_g_free0 (rv);
	rv = _tmp8_;
	_tmp9_ = g_strconcat (rv, "color: #FFF;", NULL);
	_g_free0 (rv);
	rv = _tmp9_;
	_tmp10_ = g_strconcat (rv, "}", NULL);
	_g_free0 (rv);
	rv = _tmp10_;
	_tmp11_ = g_strconcat (rv, "body { ", NULL);
	_g_free0 (rv);
	rv = _tmp11_;
	_tmp12_ = g_strconcat (rv, "background-color: #000;", NULL);
	_g_free0 (rv);
	rv = _tmp12_;
	_tmp13_ = g_strconcat (rv, "color: #FFF;", NULL);
	_g_free0 (rv);
	rv = _tmp13_;
	_tmp14_ = g_strconcat (rv, " } ", NULL);
	_g_free0 (rv);
	rv = _tmp14_;
	_tmp15_ = g_strconcat (rv, "#heading {", NULL);
	_g_free0 (rv);
	rv = _tmp15_;
	_tmp16_ = g_strconcat (rv, "background-color: #000;", NULL);
	_g_free0 (rv);
	rv = _tmp16_;
	_tmp17_ = g_strconcat (rv, "padding: 5px;", NULL);
	_g_free0 (rv);
	rv = _tmp17_;
	_tmp18_ = g_strconcat (rv, "width: 100%;", NULL);
	_g_free0 (rv);
	rv = _tmp18_;
	_tmp19_ = g_strconcat (rv, "height: 200px;", NULL);
	_g_free0 (rv);
	rv = _tmp19_;
	_tmp20_ = g_strconcat (rv, "margin-left: auto;", NULL);
	_g_free0 (rv);
	rv = _tmp20_;
	_tmp21_ = g_strconcat (rv, "margin-right: auto", NULL);
	_g_free0 (rv);
	rv = _tmp21_;
	_tmp22_ = g_strconcat (rv, "margin-bottom: 40px;", NULL);
	_g_free0 (rv);
	rv = _tmp22_;
	_tmp23_ = g_strconcat (rv, "}", NULL);
	_g_free0 (rv);
	rv = _tmp23_;
	_tmp24_ = g_strconcat (rv, "#main {", NULL);
	_g_free0 (rv);
	rv = _tmp24_;
	_tmp25_ = g_strconcat (rv, "width: 100%;", NULL);
	_g_free0 (rv);
	rv = _tmp25_;
	_tmp26_ = g_strconcat (rv, "background-color: #000;", NULL);
	_g_free0 (rv);
	rv = _tmp26_;
	_tmp27_ = g_strconcat (rv, "padding: 5px;", NULL);
	_g_free0 (rv);
	rv = _tmp27_;
	_tmp28_ = g_strconcat (rv, "margin-left: auto;", NULL);
	_g_free0 (rv);
	rv = _tmp28_;
	_tmp29_ = g_strconcat (rv, "margin-right: auto", NULL);
	_g_free0 (rv);
	rv = _tmp29_;
	_tmp30_ = g_strconcat (rv, "clear: both;", NULL);
	_g_free0 (rv);
	rv = _tmp30_;
	_tmp31_ = g_strconcat (rv, "}", NULL);
	_g_free0 (rv);
	rv = _tmp31_;
	_tmp32_ = g_strconcat (rv, "#left {", NULL);
	_g_free0 (rv);
	rv = _tmp32_;
	_tmp33_ = g_strconcat (rv, "width: 75%;", NULL);
	_g_free0 (rv);
	rv = _tmp33_;
	_tmp34_ = g_strconcat (rv, "padding: 5px;", NULL);
	_g_free0 (rv);
	rv = _tmp34_;
	_tmp35_ = g_strconcat (rv, "background-color: #000;", NULL);
	_g_free0 (rv);
	rv = _tmp35_;
	_tmp36_ = g_strconcat (rv, "float: left;", NULL);
	_g_free0 (rv);
	rv = _tmp36_;
	_tmp37_ = g_strconcat (rv, "}", NULL);
	_g_free0 (rv);
	rv = _tmp37_;
	_tmp38_ = g_strconcat (rv, "#right {", NULL);
	_g_free0 (rv);
	rv = _tmp38_;
	_tmp39_ = g_strconcat (rv, "width: 20%;", NULL);
	_g_free0 (rv);
	rv = _tmp39_;
	_tmp40_ = g_strconcat (rv, "padding: 5px;", NULL);
	_g_free0 (rv);
	rv = _tmp40_;
	_tmp41_ = g_strconcat (rv, "background-color: #000;", NULL);
	_g_free0 (rv);
	rv = _tmp41_;
	_tmp42_ = g_strconcat (rv, "float: right;", NULL);
	_g_free0 (rv);
	rv = _tmp42_;
	_tmp43_ = g_strconcat (rv, "}", NULL);
	_g_free0 (rv);
	rv = _tmp43_;
	_tmp44_ = g_strconcat (rv, "#footer {", NULL);
	_g_free0 (rv);
	rv = _tmp44_;
	_tmp45_ = g_strconcat (rv, "width: 100%;", NULL);
	_g_free0 (rv);
	rv = _tmp45_;
	_tmp46_ = g_strconcat (rv, "padding: 5px;", NULL);
	_g_free0 (rv);
	rv = _tmp46_;
	_tmp47_ = g_strconcat (rv, "background-color: #000;", NULL);
	_g_free0 (rv);
	rv = _tmp47_;
	_tmp48_ = g_strconcat (rv, "margin-left: auto;", NULL);
	_g_free0 (rv);
	rv = _tmp48_;
	_tmp49_ = g_strconcat (rv, "margin-right: auto", NULL);
	_g_free0 (rv);
	rv = _tmp49_;
	_tmp50_ = g_strconcat (rv, "}", NULL);
	_g_free0 (rv);
	rv = _tmp50_;
	_tmp51_ = g_strconcat (rv, "#navlist li", NULL);
	_g_free0 (rv);
	rv = _tmp51_;
	_tmp52_ = g_strconcat (rv, "{", NULL);
	_g_free0 (rv);
	rv = _tmp52_;
	_tmp53_ = g_strconcat (rv, "display: inline;", NULL);
	_g_free0 (rv);
	rv = _tmp53_;
	_tmp54_ = g_strconcat (rv, "list-style-type: none;", NULL);
	_g_free0 (rv);
	rv = _tmp54_;
	_tmp55_ = g_strconcat (rv, "padding-right: 20px;", NULL);
	_g_free0 (rv);
	rv = _tmp55_;
	_tmp56_ = g_strconcat (rv, "}", NULL);
	_g_free0 (rv);
	rv = _tmp56_;
	_tmp57_ = g_strconcat (rv, "</style>", NULL);
	_g_free0 (rv);
	rv = _tmp57_;
	_tmp58_ = g_strconcat (rv, "</head>", NULL);
	_g_free0 (rv);
	rv = _tmp58_;
	_tmp59_ = g_strconcat (rv, "<body>", NULL);
	_g_free0 (rv);
	rv = _tmp59_;
	_tmp60_ = g_strconcat (rv, "<!--First Row-->", NULL);
	_g_free0 (rv);
	rv = _tmp60_;
	_tmp61_ = g_strconcat (rv, "<div id=\"heading\">", NULL);
	_g_free0 (rv);
	rv = _tmp61_;
	_tmp62_ = g_strconcat (rv, "<div id=\"left\">", NULL);
	_g_free0 (rv);
	rv = _tmp62_;
	_tmp63_ = g_strconcat (rv, "<p>", NULL);
	_g_free0 (rv);
	rv = _tmp63_;
	_tmp64_ = last_fm_album_info_get_url_image (self->album);
	_tmp65_ = _g_object_ref0 (_tmp64_);
	big = _tmp65_;
	_tmp66_ = last_fm_image_get_url (big);
	_tmp67_ = g_strconcat ("<img src=\"", _tmp66_, NULL);
	_tmp68_ = g_strconcat (_tmp67_, "\" align=\"left\" style=\" margin:10px;\" ><br/>", NULL);
	_tmp69_ = g_strconcat (rv, _tmp68_, NULL);
	_g_free0 (rv);
	rv = _tmp69_;
	_g_free0 (_tmp68_);
	_g_free0 (_tmp67_);
	_tmp70_ = last_fm_track_info_get_name (self->track);
	_tmp71_ = g_strconcat ("<span style=\"font-size:44px; \">", _tmp70_, NULL);
	_tmp72_ = g_strconcat (_tmp71_, "</span><br/>", NULL);
	_tmp73_ = g_strconcat (rv, _tmp72_, NULL);
	_g_free0 (rv);
	rv = _tmp73_;
	_g_free0 (_tmp72_);
	_g_free0 (_tmp71_);
	_tmp74_ = last_fm_artist_info_get_name (self->artist);
	_tmp75_ = g_strconcat ("<span style=\"font-size:32px; \">", _tmp74_, NULL);
	_tmp76_ = g_strconcat (_tmp75_, "</span><br/>", NULL);
	_tmp77_ = g_strconcat (rv, _tmp76_, NULL);
	_g_free0 (rv);
	rv = _tmp77_;
	_g_free0 (_tmp76_);
	_g_free0 (_tmp75_);
	_tmp78_ = last_fm_album_info_get_name (self->album);
	_tmp79_ = g_strconcat ("<span style=\"font-size:22px; \">", _tmp78_, NULL);
	_tmp80_ = g_strconcat (_tmp79_, "</span><br/>", NULL);
	_tmp81_ = g_strconcat (rv, _tmp80_, NULL);
	_g_free0 (rv);
	rv = _tmp81_;
	_g_free0 (_tmp80_);
	_g_free0 (_tmp79_);
	_tmp82_ = g_strconcat (rv, "</p>", NULL);
	_g_free0 (rv);
	rv = _tmp82_;
	_tmp83_ = g_strconcat (rv, "</div>", NULL);
	_g_free0 (rv);
	rv = _tmp83_;
	_tmp84_ = g_strconcat (rv, "<div id=\"right\">", NULL);
	_g_free0 (rv);
	rv = _tmp84_;
	_tmp85_ = g_strconcat (rv, "<p>", NULL);
	_g_free0 (rv);
	rv = _tmp85_;
	_tmp86_ = last_fm_track_info_get_listeners (self->track);
	_tmp87_ = g_strdup_printf ("%i", _tmp86_);
	_tmp88_ = _tmp87_;
	_tmp89_ = g_strconcat ("Listeners: ", _tmp88_, NULL);
	_tmp90_ = g_strconcat (_tmp89_, "<br/>", NULL);
	_tmp91_ = g_strconcat (rv, _tmp90_, NULL);
	_g_free0 (rv);
	rv = _tmp91_;
	_g_free0 (_tmp90_);
	_g_free0 (_tmp89_);
	_g_free0 (_tmp88_);
	_tmp92_ = last_fm_track_info_get_playcount (self->track);
	_tmp93_ = g_strdup_printf ("%i", _tmp92_);
	_tmp94_ = _tmp93_;
	_tmp95_ = g_strconcat ("Play count: ", _tmp94_, NULL);
	_tmp96_ = g_strconcat (_tmp95_, "<br/><br/>", NULL);
	_tmp97_ = g_strconcat (rv, _tmp96_, NULL);
	_g_free0 (rv);
	rv = _tmp97_;
	_g_free0 (_tmp96_);
	_g_free0 (_tmp95_);
	_g_free0 (_tmp94_);
	_tmp98_ = g_strconcat (rv, "Tags: ", NULL);
	_g_free0 (rv);
	rv = _tmp98_;
	_tmp99_ = g_strdup ("");
	tags = _tmp99_;
	{
		GeeArrayList* _tmp100_ = NULL;
		GeeArrayList* _tag_list;
		gint _tmp101_;
		gint _tag_size;
		gint _tag_index;
		_tmp100_ = last_fm_track_info_tags (self->track);
		_tag_list = _tmp100_;
		_tmp101_ = gee_collection_get_size ((GeeCollection*) _tag_list);
		_tag_size = _tmp101_;
		_tag_index = -1;
		while (TRUE) {
			gpointer _tmp102_ = NULL;
			LastFMTag* tag;
			const gchar* _tmp103_ = NULL;
			gchar* _tmp104_;
			gchar* _tmp105_;
			const gchar* _tmp106_ = NULL;
			gchar* _tmp107_;
			gchar* _tmp108_;
			gchar* _tmp109_;
			_tag_index = _tag_index + 1;
			if (!(_tag_index < _tag_size)) {
				break;
			}
			_tmp102_ = gee_abstract_list_get ((GeeAbstractList*) _tag_list, _tag_index);
			tag = (LastFMTag*) _tmp102_;
			_tmp103_ = last_fm_tag_get_url (tag);
			_tmp104_ = g_strconcat (" <a href=\"", _tmp103_, NULL);
			_tmp105_ = g_strconcat (_tmp104_, "\">", NULL);
			_tmp106_ = last_fm_tag_get_tag (tag);
			_tmp107_ = g_strconcat (_tmp105_, _tmp106_, NULL);
			_tmp108_ = g_strconcat (_tmp107_, "</a>,", NULL);
			_tmp109_ = g_strconcat (tags, _tmp108_, NULL);
			_g_free0 (tags);
			tags = _tmp109_;
			_g_free0 (_tmp108_);
			_g_free0 (_tmp107_);
			_g_free0 (_tmp105_);
			_g_free0 (_tmp104_);
			_g_object_unref0 (tag);
		}
		_g_object_unref0 (_tag_list);
	}
	_tmp110_ = strlen (tags);
	_tmp111_ = string_substring (tags, (glong) 0, (glong) (_tmp110_ - 1));
	_tmp112_ = _tmp111_;
	_tmp113_ = g_strconcat (rv, _tmp112_, NULL);
	_g_free0 (rv);
	rv = _tmp113_;
	_g_free0 (_tmp112_);
	_tmp114_ = g_strconcat (rv, "<br/><br/>", NULL);
	_g_free0 (rv);
	rv = _tmp114_;
	_tmp115_ = g_strconcat (rv, "Similar Bands: ", NULL);
	_g_free0 (rv);
	rv = _tmp115_;
	_tmp116_ = g_strdup ("");
	sim = _tmp116_;
	{
		GeeArrayList* _tmp117_ = NULL;
		GeeArrayList* _similar_list;
		gint _tmp118_;
		gint _similar_size;
		gint _similar_index;
		_tmp117_ = last_fm_artist_info_similarArtists (self->artist);
		_similar_list = _tmp117_;
		_tmp118_ = gee_collection_get_size ((GeeCollection*) _similar_list);
		_similar_size = _tmp118_;
		_similar_index = -1;
		while (TRUE) {
			gpointer _tmp119_ = NULL;
			LastFMArtistInfo* similar;
			const gchar* _tmp120_ = NULL;
			gchar* _tmp121_;
			gchar* _tmp122_;
			const gchar* _tmp123_ = NULL;
			gchar* _tmp124_;
			gchar* _tmp125_;
			gchar* _tmp126_;
			_similar_index = _similar_index + 1;
			if (!(_similar_index < _similar_size)) {
				break;
			}
			_tmp119_ = gee_abstract_list_get ((GeeAbstractList*) _similar_list, _similar_index);
			similar = (LastFMArtistInfo*) _tmp119_;
			_tmp120_ = last_fm_artist_info_get_url (similar);
			_tmp121_ = g_strconcat (" <a href=\"", _tmp120_, NULL);
			_tmp122_ = g_strconcat (_tmp121_, "\">", NULL);
			_tmp123_ = last_fm_artist_info_get_name (similar);
			_tmp124_ = g_strconcat (_tmp122_, _tmp123_, NULL);
			_tmp125_ = g_strconcat (_tmp124_, "</a>,", NULL);
			_tmp126_ = g_strconcat (sim, _tmp125_, NULL);
			_g_free0 (sim);
			sim = _tmp126_;
			_g_free0 (_tmp125_);
			_g_free0 (_tmp124_);
			_g_free0 (_tmp122_);
			_g_free0 (_tmp121_);
			_g_object_unref0 (similar);
		}
		_g_object_unref0 (_similar_list);
	}
	_tmp127_ = strlen (sim);
	_tmp128_ = string_substring (sim, (glong) 0, (glong) (_tmp127_ - 1));
	_tmp129_ = _tmp128_;
	_tmp130_ = g_strconcat (rv, _tmp129_, NULL);
	_g_free0 (rv);
	rv = _tmp130_;
	_g_free0 (_tmp129_);
	_tmp131_ = g_strconcat (rv, "</div>", NULL);
	_g_free0 (rv);
	rv = _tmp131_;
	_tmp132_ = g_strconcat (rv, "</div>", NULL);
	_g_free0 (rv);
	rv = _tmp132_;
	_tmp133_ = g_strconcat (rv, "<div style=\" width: 100%; margin-left: auto; margin-right: auto; clea" \
"r:both; \" >", NULL);
	_g_free0 (rv);
	rv = _tmp133_;
	_tmp134_ = g_strconcat (rv, "<p style=\" text-align:left;\">", NULL);
	_g_free0 (rv);
	rv = _tmp134_;
	_tmp135_ = last_fm_track_info_get_summary (self->track);
	_tmp136_ = g_strconcat (rv, _tmp135_, NULL);
	_g_free0 (rv);
	rv = _tmp136_;
	_tmp137_ = g_strconcat (rv, "</p>", NULL);
	_g_free0 (rv);
	rv = _tmp137_;
	_tmp138_ = g_strconcat (rv, "</div>", NULL);
	_g_free0 (rv);
	rv = _tmp138_;
	_tmp139_ = g_strconcat (rv, "<div id=\"footer\">", NULL);
	_g_free0 (rv);
	rv = _tmp139_;
	_tmp140_ = g_strconcat (rv, "<p align=\"right\" style=\"padding:10px;\">", NULL);
	_g_free0 (rv);
	rv = _tmp140_;
	_tmp141_ = last_fm_artist_info_get_url_image (self->artist);
	_tmp142_ = _g_object_ref0 (_tmp141_);
	_tmp143_ = _tmp142_;
	_g_object_unref0 (big);
	big = _tmp143_;
	_tmp144_ = last_fm_image_get_url (big);
	_tmp145_ = g_strconcat ("<img src=\"", _tmp144_, NULL);
	_tmp146_ = g_strconcat (_tmp145_, "\" align=\"right\" style=\" margin-left: 10px; \"><br/>", NULL);
	_tmp147_ = g_strconcat (rv, _tmp146_, NULL);
	_g_free0 (rv);
	rv = _tmp147_;
	_g_free0 (_tmp146_);
	_g_free0 (_tmp145_);
	_tmp148_ = last_fm_artist_info_get_summary (self->artist);
	_tmp149_ = g_strconcat ("<span style=\"  \">", _tmp148_, NULL);
	_tmp150_ = g_strconcat (_tmp149_, "</span>", NULL);
	_tmp151_ = g_strconcat (rv, _tmp150_, NULL);
	_g_free0 (rv);
	rv = _tmp151_;
	_g_free0 (_tmp150_);
	_g_free0 (_tmp149_);
	_tmp152_ = g_strconcat (rv, "</p>", NULL);
	_g_free0 (rv);
	rv = _tmp152_;
	_tmp153_ = g_strconcat (rv, "</body>", NULL);
	_g_free0 (rv);
	rv = _tmp153_;
	_tmp154_ = g_strconcat (rv, "</html>", NULL);
	_g_free0 (rv);
	rv = _tmp154_;
	result = rv;
	_g_free0 (sim);
	_g_free0 (tags);
	_g_object_unref0 (big);
	return result;
}


static void beat_box_song_info_class_init (BeatBoxSongInfoClass * klass) {
	beat_box_song_info_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (BeatBoxSongInfoPrivate));
	G_OBJECT_CLASS (klass)->finalize = beat_box_song_info_finalize;
}


static void beat_box_song_info_instance_init (BeatBoxSongInfo * self) {
	self->priv = BEAT_BOX_SONG_INFO_GET_PRIVATE (self);
}


static void beat_box_song_info_finalize (GObject* obj) {
	BeatBoxSongInfo * self;
	self = BEAT_BOX_SONG_INFO (obj);
	_g_object_unref0 (self->priv->file);
	_g_object_unref0 (self->song);
	_g_object_unref0 (self->artist);
	_g_object_unref0 (self->track);
	_g_object_unref0 (self->album);
	G_OBJECT_CLASS (beat_box_song_info_parent_class)->finalize (obj);
}


GType beat_box_song_info_get_type (void) {
	static volatile gsize beat_box_song_info_type_id__volatile = 0;
	if (g_once_init_enter (&beat_box_song_info_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (BeatBoxSongInfoClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) beat_box_song_info_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BeatBoxSongInfo), 0, (GInstanceInitFunc) beat_box_song_info_instance_init, NULL };
		GType beat_box_song_info_type_id;
		beat_box_song_info_type_id = g_type_register_static (G_TYPE_OBJECT, "BeatBoxSongInfo", &g_define_type_info, 0);
		g_once_init_leave (&beat_box_song_info_type_id__volatile, beat_box_song_info_type_id);
	}
	return beat_box_song_info_type_id__volatile;
}



