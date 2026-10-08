// /Script/Icarus.NotesSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x50, declared in Icarus/Source/Icarus/IcarusGenerated/Subsystems/NotesSubsystem.h

UCLASS()
class UNotesSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FNoteCollectedNotifySignature OnNoteCollectedNotify;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FNoteReadNotifySignature OnNoteReadNotify;  // 0x0040, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastNoteCollectedDelegate(AActor* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastNoteReadDelegate(AActor* Player, FItemData Item);  // parameters 0x1F8
};
