// /Script/AIModule.PawnActionStack
// size 0x8, declared in Engine/Source/Runtime/AIModule/Classes/Actions/PawnActionsComponent.h

USTRUCT()
struct FPawnActionStack
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() UPawnAction* TopAction;  // 0x0000, size 0x8
};
