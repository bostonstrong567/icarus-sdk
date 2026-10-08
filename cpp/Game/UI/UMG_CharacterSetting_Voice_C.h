// /Game/UI/UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C
// Derives from: UUMG_CharacterSetting_TextBase_C > UUMG_CharacterSetting_Base_C > UUserWidget > UWidget > UVisual > UObject
// size 0x319, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CharacterSetting_Voice_C : public UUMG_CharacterSetting_TextBase_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* AuditionFMODEvent;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasMadeInitialSelection;  // 0x0318, size 0x1

    UFUNCTION(BlueprintCallable) void ChangeSelection(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ClearOptions(bool ClearIndex);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GenerateOptions(FCharacterVoicesRowHandle DefaultSelection);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetSelectionDisplayName(FText& DisplayName);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsValidVoice(FCharacterVoicesRowHandle RowHandle, bool& IsValid);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void PlayAuditionEvent();
    UFUNCTION(BlueprintCallable) void SetVoiceParameter();
};
