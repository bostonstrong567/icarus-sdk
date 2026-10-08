// /Game/UI/Projection/W_SpaceTooltip_Base.W_SpaceTooltip_Base_C
// Derives from: UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x300, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_SpaceTooltip_Base_C : public UW_ProjectionWidget_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_81;  // 0x02D0, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_125;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InteractionPrompt_C* UMG_InteractionPrompt;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Text;  // 0x02E8, size 0x18

    UFUNCTION() void ExecuteUbergraph_W_SpaceTooltip_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TickWidget();
};
