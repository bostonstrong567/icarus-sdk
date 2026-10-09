// /Script/Engine.TickPrerequisite
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineBaseTypes.h

USTRUCT()
struct FTickPrerequisite
{
public:
    TWeakObjectPtr<UObject,FWeakObjectPtr> PrerequisiteObject;  // 0x0000, not reflected
    FTickFunction * PrerequisiteTickFunction;  // 0x0008, not reflected
};
