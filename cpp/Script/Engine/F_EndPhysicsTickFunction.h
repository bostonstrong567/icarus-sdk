// /Script/Engine.EndPhysicsTickFunction
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Engine/World.h

USTRUCT()
struct FEndPhysicsTickFunction : public FTickFunction
{
public:
    UWorld * Target;  // 0x0028, not reflected
};
