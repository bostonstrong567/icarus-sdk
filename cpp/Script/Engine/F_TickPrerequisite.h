// /Script/Engine.TickPrerequisite
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineBaseTypes.h

USTRUCT()
struct FTickPrerequisite
{

    // Not reflected:
    TWeakObjectPtr<UObject,FWeakObjectPtr> PrerequisiteObject;  // 0x0000
    FTickFunction * PrerequisiteTickFunction;  // 0x0008
};
