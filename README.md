# Reading Head First Design Patterns

Content related to reading the book Head First Design Patterns, Second Edition.

## Chapter 1

### Sharpen Your Pencil - Inheritance Disadvantages

The ticked checkboxes indicates an disadvantages of using *inheritance* to provide Duck behaviour?

- [x] Code is duplicated across subclasses.
  - For example the overridden `fly()` method in `RubberDuck` and `DecoyDuck`, being identical.
- [x] Runtime behaviour changes are difficult.
  - The inheritance tree is typically set up statically at compile time.
- [ ] We can't make ducks dance.
  - False, we can add a `dance()` method if needed.
- [x] It's hard to gain knowledge of all duck behaviors.
  - We have to check every subclass for what behaviors being overridden.
- [ ] Ducks can't fly and quack at the same time.
  - False, a duck can both fly an quack, assuming our system supports parallelism.
- [x] Changes can unintentionally affect other ducks.
  - Example being when Joe by mistake made the rubber ducks able to fly.

## Chapter 2

## Chapter 3
