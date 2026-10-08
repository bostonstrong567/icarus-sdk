// /Script/AIModule.PawnActionEvent
// size 0x18, declared in Engine/Source/Runtime/AIModule/Classes/Actions/PawnActionsComponent.h

USTRUCT()
struct FPawnActionEvent
{
    UPROPERTY() UPawnAction* Action;  // 0x0000, size 0x8

    // Not reflected:
    EPawnActionEventType::Type EventType;  // 0x0008
    EAIRequestPriority::Type Priority;  // 0x000C
    uint32 Index;  // 0x0010
};
