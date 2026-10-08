// /Game/BP/UI/Talents/Player/UMG_TalentTooltip_Player.UMG_TalentTooltip_Player_C
// Derives from: UTalentTooltipWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2E0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TalentTooltip_Player_C : public UTalentTooltipWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* DescriptionBox;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* DividerBottom;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* DividerTop;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* RespecPrompt;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TalentName;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> GroupSizes;  // 0x02C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> GroupStartIndices;  // 0x02D0, size 0x10

    UFUNCTION(BlueprintCallable) void BuildStatDescriptionList();
    UFUNCTION() void ExecuteUbergraph_UMG_TalentTooltip_Player(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnTalentSet();
    UFUNCTION(BlueprintCallable) void Set_State(FTalentModelData Data);  // parameters 0x10, named "Set State"
};
