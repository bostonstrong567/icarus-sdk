// /Game/UI/Hab/DropTerminal/UMG_PlanetProspectView.UMG_PlanetProspectView_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x380, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PlanetProspectView_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ProspectFadeIn;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LandMass_1;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LandMass_2;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LandMass_3;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LandMass_4;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LandMass_5;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LandMass_6;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* LandMasses;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* PlanetBackground;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* PlanetImageBG;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* PlanetProspectContainer;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* ProspectTypeSwitcher;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectPin_C* UMG_ProspectPin;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectPin_C* UMG_ProspectPin_3;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectPin_C* UMG_ProspectPin_4;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectPin_C* UMG_ProspectPin_5;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectPin_C* UMG_ProspectPin_6;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectPin_C* UMG_ProspectPin_7;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectPin_C* UMG_ProspectPin_8;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectPin_C* UMG_ProspectPin_9;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectPin_C* UMG_ProspectPin_10;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectPin_C* UMG_ProspectPin_11;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectPin_C* UMG_ProspectPin_12;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectPin_C* UMG_ProspectPin_13;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectPin_C* UMG_ProspectPin_14;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectPin_C* UMG_ProspectPin_15;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_ProspectPin_C*> PlanetProspectWidgets;  // 0x0338, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FProspectServerInfo> ProspectList;  // 0x0348, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FadedIn;  // 0x0358, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FProspectSelected ProspectSelected;  // 0x0360, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FProspectExpired ProspectExpired;  // 0x0370, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_PlanetProspectView(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ProspectExpiredEvent();
    UFUNCTION(BlueprintCallable) void ProspectExpired__DelegateSignature();
    UFUNCTION(BlueprintCallable) void ProspectSelectedEvent(FProspectServerInfo Prospect, bool Active);  // parameters 0x1B1
    UFUNCTION(BlueprintCallable) void ProspectSelected__DelegateSignature(FProspectServerInfo ProspectInfo, bool Active);  // parameters 0x1B1
    UFUNCTION(BlueprintCallable) void RefreshList(TArray<FProspectServerInfo>& Prospects);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateLandMassVisuals(bool Enabled, UImage* Landmass);  // parameters 0x10
};
