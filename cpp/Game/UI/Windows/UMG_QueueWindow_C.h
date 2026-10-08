// /Game/UI/Windows/UMG_QueueWindow.UMG_QueueWindow_C
// Derives from: UConfirmationPopupBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2E8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_QueueWindow_C : public UConfirmationPopupBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* CancelButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_96;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* QueueNumber;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadingIcon_C* UMG_LoadingIcon;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnAnyItemSelected OnAnyItemSelected;  // 0x02C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FClose Close;  // 0x02D8, size 0x10

    UFUNCTION() void BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Close__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_UMG_QueueWindow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnAnyItemSelected__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Update(int32 QueueSize, float TimeInSeconds);  // parameters 0x8
};
