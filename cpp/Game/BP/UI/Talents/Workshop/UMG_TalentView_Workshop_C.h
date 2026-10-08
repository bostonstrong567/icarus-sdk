// /Game/BP/UI/Talents/Workshop/UMG_TalentView_Workshop.UMG_TalentView_Workshop_C
// Derives from: UTalentViewInterface > UUserWidget > UWidget > UVisual > UObject
// size 0x351, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TalentView_Workshop_C : public UTalentViewInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ArchetypeBox;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_1;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_2;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_3;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider_1;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Gradient;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* GraphWidgetSwitcher;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Noise;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKeyPrompt_C* Pan;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pattern;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pattern_1;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKeyPrompt_C* QuickCraft;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKeyPrompt_C* Select_1;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CurrencyExchangeButton_C* UMG_CurrencyExchangeButton;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CurrencyExchangeRedToRen_C* UMG_CurrencyExchangeRedToRen;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CurrencyExchangeYellowToRen_C* UMG_CurrencyExchangeYellowToRen;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MetaResourceDisplay_C* UMG_MetaResourceDisplay;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKeyPrompt_C* UMG_PhysicalKeyPrompt;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TalentFilter_C* UMG_TalentFilter;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TreePoints_C* UMG_TreePoints;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_TalentArchetype_Player_C*> Buttons;  // 0x0328, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText AvailableTalents;  // 0x0338, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x0350, size 0x1

    UFUNCTION() void ExecuteUbergraph_UMG_TalentView_Workshop(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UTalentGraphWidget* GetGraphWidget() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) TArray<UTalentTreeWidget*> GetTalentTreeWidgets();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Nothing();
    UFUNCTION(BlueprintCallable) void Nothing2();
    UFUNCTION(BlueprintCallable) void Nothing3();
    UFUNCTION(BlueprintCallable) void OnClick(FTalentArchetypesRowHandle Archetype);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void OnModelViewChanged(UTalentModelInterface* InModel, UTalentViewInterface* InView);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ReplicationResult2(bool bSuccess, const FItemData& Item);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable) void ResearchResult(bool bSuccess);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Setup();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
