// /Script/Engine.ActorTickFunction
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineBaseTypes.h

USTRUCT()
struct FActorTickFunction : public FTickFunction
{

    // Not reflected:
    AActor * Target;  // 0x0028
};
