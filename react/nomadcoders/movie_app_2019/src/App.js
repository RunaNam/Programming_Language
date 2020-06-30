import React from "react";
import PropTypes from "prop-types";

const foodLike = [
  {
    name: "Kimchi",
    rating: 6,
  },
  {
    name: "ramen",
    rating: 4,
  },
  {
    name: "rice",
    rating: 3,
  },
];

function renderFood(dish) {
  return <Food name={dish.name} rating={dish.rating} />;
}

Food.PropTypes = {};

function Food({ name, rating }) {
  return (
    <div>
      <h3> I like {name}</h3>
      <h4>{rating}/5</h4>
    </div>
  );
}
function App() {
  return (
    <div>
      <h1>Hello</h1>
      {foodLike.map(renderFood)}
    </div>
  );
}

export default App;
