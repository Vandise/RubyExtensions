require 'test_helper'

class TestSpaceTest < Minitest::Test
  def test_that_it_has_a_basic_class
    ::TestSpace::BasicClass
  end
  def test_basic_class
    x = ::TestSpace::BasicClass.new("Ben")
    puts x.name
  end
end
