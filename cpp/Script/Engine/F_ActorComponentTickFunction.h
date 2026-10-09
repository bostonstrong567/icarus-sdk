// /Script/Engine.ActorComponentTickFunction
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineBaseTypes.h

USTRUCT()
struct FActorComponentTickFunction : public FTickFunction
{
public:
    UActorComponent * Target;  // 0x0028, not reflected
};
