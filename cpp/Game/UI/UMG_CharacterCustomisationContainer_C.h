// /Game/UI/UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x348, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CharacterCustomisationContainer_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* BackButton;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* MainDisplayScaleBox;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterCreation_C* UMG_CharacterCreation;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_PlayerPreviewManager_C* PreviewManager;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UWorld> DefaultDiorama;  // 0x0288, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterCosmetics InitialCosmetics;  // 0x02B0, size 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText PlayerName;  // 0x0330, size 0x18

    UFUNCTION() void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_CharacterCustomisationContainer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnCosmeticUpdateRequest(FReqUpdateCosmetics Request, int32 Retries);  // parameters 0x9C
    UFUNCTION(BlueprintCallable) void OnCustomisationCompleted(bool Success, FOnlineProfileCharacter NewCharacterInfo);  // parameters 0xF8
    UFUNCTION(BlueprintCallable) void OnCustomisationUpdated(FCharacterCosmetics CharacterData);  // parameters 0x80
    UFUNCTION(BlueprintCallable) void OnFail_97CCC08F4ACBB904FC9CD19A62C8CD71(const FResUpdateCosmetics& Response);  // parameters 0xF8
    UFUNCTION(BlueprintCallable) void OnSuccess_97CCC08F4ACBB904FC9CD19A62C8CD71(const FResUpdateCosmetics& Response);  // parameters 0xF8
};
