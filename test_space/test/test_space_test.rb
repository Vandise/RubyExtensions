require 'test_helper'

class TestSpaceTest < Minitest::Test
  def test_that_it_has_a_version_number
    refute_nil ::TestSpace::VERSION
  end

  def test_it_does_something_useful
    puts ::TestSpace::String.methods
  end
end
