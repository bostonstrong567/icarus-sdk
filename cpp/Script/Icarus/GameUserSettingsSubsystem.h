// /Script/Icarus.GameUserSettingsSubsystem
// Derives from: UGameInstanceSubsystem > USubsystem > UObject
// size 0x30, declared in Icarus/Source/Icarus/Subsystems/GameInstance/GameUserSettingsSubsystem.h

UCLASS()
class UGameUserSettingsSubsystem : public UGameInstanceSubsystem
{
public:
    UFUNCTION(BlueprintCallable) bool CheckForExistingMapping(const FKey& Key, const FKeybindContextsRowHandle& Context, const FKeybindingsRowHandle& RowHandle, FKeybindContextsRowHandle& ConflictingInputContext, FKeybindingsRowHandle& ConflictingKeybind);  // parameters 0x79
    UFUNCTION(BlueprintCallable) void GetCurrentActionMapping(FKeybindingsRowHandle RowHandle, FInputActionKeyMapping& Out, EValid& Paths);  // parameters 0x41
    UFUNCTION(BlueprintCallable) void GetCurrentAxisMapping(FKeybindingsRowHandle RowHandle, FInputAxisKeyMapping& Out, EValid& Paths);  // parameters 0x41
    UFUNCTION(BlueprintCallable) FInputActionKeyMapping GetDefaultActionMapping(const FKeybindContextsRowHandle& Context, FKeybindingsRowHandle RowHandle, bool bController, EValid& Paths);  // parameters 0x60
    UFUNCTION(BlueprintCallable) FInputAxisKeyMapping GetDefaultAxisMapping(const FKeybindContextsRowHandle& Context, FKeybindingsRowHandle RowHandle, bool bController, EValid& Paths);  // parameters 0x60
    UFUNCTION(BlueprintCallable) bool RebindAction(const FKeybindContextsRowHandle& Context, const FInputActionKeyMapping& NewMapping, bool bController);  // parameters 0x42
    UFUNCTION(BlueprintCallable) bool RebindAxis(const FKeybindContextsRowHandle& Context, const FInputAxisKeyMapping& NewMapping, bool bController);  // parameters 0x42
    UFUNCTION(BlueprintCallable) FText ReplaceAnyTokenizedKeybindingsInText(const FText& TextInput);  // parameters 0x30
};
