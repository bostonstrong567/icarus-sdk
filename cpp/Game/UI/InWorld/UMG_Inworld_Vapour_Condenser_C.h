// /Game/UI/InWorld/UMG_Inworld_Vapour_Condenser.UMG_Inworld_Vapour_Condenser_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2E8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Inworld_Vapour_Condenser_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* WaveProgressAnimation;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* BorderAnimation;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ActiveOverlay;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CompletionsCount;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* DeactiveOverlay;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* EnzymeOverlay;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ExoticOverlay;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_3;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_95;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RewardText;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StatusText;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* WaveProgress;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* WaveProgressText;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* WaveText;  // 0x02E0, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Inworld_Vapour_Condenser(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Update_State(bool Active, bool Has_Material, bool Can_Harvest_Exotics);  // parameters 0x3, named "Update State"
    UFUNCTION(BlueprintCallable) void Update_Wave(int32 Current_Wave, FHordeRowHandle Current_Horde, float Progress);  // parameters 0x20, named "Update Wave"
    UFUNCTION(BlueprintCallable) void UpdateCompletions(int32 CurrentCompletions, int32 MaxCompletions);  // parameters 0x8
};
