// /Script/AIModule.PawnAction_Sequence
// Derives from: UPawnAction > UObject
// size 0xB8, declared in Engine/Source/Runtime/AIModule/Classes/Actions/PawnAction_Sequence.h

UCLASS(EditInlineNew)
class UPawnAction_Sequence : public UPawnAction
{
public:
    UPROPERTY() TArray<UPawnAction*> ActionSequence;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EPawnActionFailHandling> ChildFailureHandlingMode;  // 0x00A0, size 0x1
    UPROPERTY(Transient) UPawnAction* RecentActionCopy;  // 0x00A8, size 0x8
    uint32 CurrentActionIndex;  // 0x00B0, not reflected
    EPawnSubActionTriggeringPolicy::Type SubActionTriggeringPolicy;  // 0x00B4, not reflected
};
