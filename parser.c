/* Name, parser.c, CS 24000, Spring 2020
 * Last updated March 27, 2020
 */

/* Add any includes here */

#include "parser.h"

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <malloc.h>

/* Define parse_file here */
song_data_t *parse_file(const char*file_name) {
  //assert(file_name != NULL);

  song_data_t *new_song = malloc(sizeof(song_data_t));
  assert(new_song != NULL);
  new_song->path = malloc(strlen(file_name) + 1);
  assert(new_song->path != NULL);
  strncpy(new_song->path, file_name, strlen(file_name));
  new_song->path[strlen(file_name)] = '\0';


  
  //open file and pass it to each part of the function

  return new_song;
}
/* Define parse_header here */
void parse_header(FILE *file_ptr, song_data_t *song) {
  char* chunk_type = NULL;
  chunk_type = fread(chunk_type, 4, 1, file_ptr);
  chunk_type[4] = '\0'
  //assert(strncmp(chunk_type, "Mthd", 4) == 0);
  //read first 4 bytes

}
/* Define parse_track here */
void parse_track(FILE *file_ptr, song_data_t *song) {
  
}
/* Define parse_event here */
event_t *parse_event(FILE *file_ptr) {
  return 0;
}
/* Define parse_sys_event here */
sys_event_t parse_sys_event(FILE *file_ptr, uint8_t data_len?) {

	return 0;
}
/* Define parse_meta_event here */
meta_event_t parse_meta_event(FILE *file_ptr) {
  return 0;
}
/* Define parse_midi_event here */
midi_event_t parse_midi_event(FILE *file_ptr, uint8_t n) {
  return 0;
}
/* Define parse_var_len here */
uint32_t_t parse_var_len(FILE *) {
  return 0;
}
/* Define event_type here */
uint8_t event_type(event_t *event) {
  return 0;
}

/* Define free_song here */
void free_song(song_data_t *song) {

}
/* Define free_track_node here */
void free_track_node(track_node_t *track) {

}
/* Define free_event_node here */
void free_event_node(event_node_t *event) {

}
/* Define end_swap_16 here */
uint16_t end_swap_16(uint8_t[2] input_numbers) {
  return (uint16_t) ((input_numbers[1] << 8) | input_numbers[0]);
}
/* Define end_swap_32 here */
uint32_t end_swap_32(uint16_t[2] input_numbers) {
  return (uint32_t) ((input_numbers[1] << 16) | input_numbers[0]);
}