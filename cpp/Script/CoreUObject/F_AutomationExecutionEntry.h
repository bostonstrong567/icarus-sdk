// /Script/CoreUObject.AutomationExecutionEntry
// size 0x58, declared in Engine/Source/Runtime/Core/Public/Misc/AutomationEvent.h

USTRUCT()
struct FAutomationExecutionEntry
{
    UPROPERTY() FAutomationEvent Event;  // 0x0000, size 0x38
    UPROPERTY() FString Filename;  // 0x0038, size 0x10
    UPROPERTY() int32 LineNumber;  // 0x0048, size 0x4
    UPROPERTY() FDateTime Timestamp;  // 0x0050, size 0x8
};
