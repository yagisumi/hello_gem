require "hello_gem/version"

module HelloGem
  # Your code goes here...
  class << self
    def hello
      puts "Hello!"
    end
  end
end

require 'hello_gem/hello'