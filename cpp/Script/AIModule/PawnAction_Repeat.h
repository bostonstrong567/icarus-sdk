// /Script/AIModule.PawnAction_Repeat
// Derives from: UPawnAction > UObject
// size 0xB0, declared in Engine/Source/Runtime/AIModule/Classes/Actions/PawnAction_Repeat.h

UCLASS(EditInlineNew)
class UPawnAction_Repeat : public UPawnAction
{
public:
    UPROPERTY() UPawnAction* ActionToRepeat;  // 0x0090, size 0x8
    UPROPERTY(Transient) UPawnAction* RecentActionCopy;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EPawnActionFailHandling> ChildFailureHandlingMode;  // 0x00A0, size 0x1
    int32 RepeatsLeft;  // 0x00A4, not reflected
    EPawnSubActionTriggeringPolicy::Type SubActionTriggeringPolicy;  // 0x00A8, not reflected
};
