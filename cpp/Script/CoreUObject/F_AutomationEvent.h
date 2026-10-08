// /Script/CoreUObject.AutomationEvent
// size 0x38, declared in Engine/Source/Runtime/Core/Public/Misc/AutomationEvent.h

USTRUCT()
struct FAutomationEvent
{
    UPROPERTY() EAutomationEventType Type;  // 0x0000, size 0x1
    UPROPERTY() FString Message;  // 0x0008, size 0x10
    UPROPERTY() FString Context;  // 0x0018, size 0x10
    UPROPERTY() FGuid Artifact;  // 0x0028, size 0x10
};
