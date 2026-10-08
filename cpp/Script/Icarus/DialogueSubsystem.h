// /Script/Icarus.DialogueSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x40, declared in Icarus/Source/Icarus/IcarusGenerated/Subsystems/DialogueSubsystem.h

UCLASS()
class UDialogueSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FTrackDialoguePlayNotifySignature OnTrackDialoguePlayNotify;  // 0x0030, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastTrackDialoguePlayDelegate(FDialogueRowHandle DialogRow);  // parameters 0x18
};
