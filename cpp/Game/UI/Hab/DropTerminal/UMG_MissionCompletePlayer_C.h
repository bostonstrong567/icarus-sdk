// /Game/UI/Hab/DropTerminal/UMG_MissionCompletePlayer.UMG_MissionCompletePlayer_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0xCB9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MissionCompletePlayer_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* CharacterEntry;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CharacterName;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* HostImage;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Level;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ThumbsUp;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle Button_Up_Default;  // 0x0290, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle Button_Up_Selected;  // 0x0508, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle Button_Down_Default;  // 0x0780, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle Button_Down_Selected;  // 0x09F8, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanRate;  // 0x0C70, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Liked;  // 0x0C71, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAssociatedMemberInfo Member;  // 0x0C78, size 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Host;  // 0x0CB8, size 0x1

    UFUNCTION() void BndEvt__ThumbsUp_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_MissionCompletePlayer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void IsSettled(bool Settled);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Set_Rating_Button_Style(bool Liked);  // parameters 0x1, named "Set Rating Button Style"
    UFUNCTION(BlueprintCallable) void ShowRatings();
};
