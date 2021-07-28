/* TYPES */
type player =
  | Player_one
  | Player_two;

/* Surely not the best choice */
type point = int;

type points_data = {
  player_one: point,
  player_two: point,
};

/* Surely incomplete */
type score =
  | Points(points_data)
  | Deuce
  | Game(player);

/* TOOLING FUNCTIONS */

let string_of_player = player =>
  switch (player) {
  | Player_one => "Player 1"
  | Player_two => "Player 2"
  };

let other_player = player =>
  switch (player) {
  | Player_one => Player_two
  | Player_two => Player_one
  };

let string_of_point: point => string = (
  point =>
    switch (point) {
    | _ => "replace this with your code"
    }:
    point => string
);

let string_of_score: score => string = (
  score =>
    switch (score) {
    | _ => "replace this with your code"
    }:
    score => string
);

/* An exemple how to use option to avoid null values */
let increment_point: point => option(point) = (
  point =>
    switch (point) {
    | 0 => Some(15)
    | 15 => Some(30)
    | 30 => Some(40)
    | _ => None
    }:
    point => option(point)
);

/* An exemple how to extract values from 'a option value*/
let read_from_option_point: option(point) => point = (
  optinal_point =>
    switch (optinal_point) {
    | Some(a) => a
    | None => 0
    }:
    option(point) => point
);

/* TRANSITION FUNCTIONS */
let score_when_deuce: player => score = (
  winner => raise @@ Failure("not implemented"): player => score
);

let score_when_advantage: (player, player) => score = (
  (advantagedPlayer, winner) => raise @@ Failure("not implemented"):
    (player, player) => score
);

let score_when_forty: ('a, player) => score = (
  (current_forty, winner) => raise @@ Failure("not implemented"):
    ('a, player) => score
);

let score_when_game: player => score = (
  winner => raise @@ Failure("not implemented"): player => score
);

let score_when_point: ('a, player) => score = (
  (current, winner) => raise @@ Failure("not implemented"):
    ('a, player) => score
);

let score: (score, player) => score = (
  (currentScore, winner) => raise @@ Failure("not implemented"):
    (score, player) => score
);
