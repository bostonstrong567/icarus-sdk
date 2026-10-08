// /Game/UI/Debug/UMG_ResourceInspectionToolPopup.UMG_ResourceInspectionToolPopup_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x350, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ResourceInspectionToolPopup_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DeviceOnOff;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Electricity_Brownout;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Electricity_Demand;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Electricity_FlowList;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Electricity_NetworkFlow;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Electricity_Supply;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ElectricitySection;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Fuel_Brownout;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Fuel_Demand;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Fuel_FlowList;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Fuel_NetworkFlow;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Fuel_Supply;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* FuelSection;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* GeneratorOnOff;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* GeneratorSection;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProcessingOnOff;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ProcessingSection;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Water_Brownout;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Water_Demand;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Water_FlowList;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Water_NetworkFlow;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Water_Supply;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* WaterSection;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HoldWidget;  // 0x0328, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UResourceComponent* Resource;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UProcessingComponent* Processing;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* TargetActor;  // 0x0340, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UGeneratorComponent* Generator;  // 0x0348, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_ResourceInspectionToolPopup(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetFlowSourceName(UObject* FlowSource, FText& Name);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void Initialise(bool HoldWidget, AActor* TargetActor);  // parameters 0x10
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void Update();
    UFUNCTION(BlueprintCallable) void UpdateResourceSection(FIcarusResourcesEnum ResourceType, UWidget* Section, UTextBlock* ProduceText, UTextBlock* ConsumeText, UTextBlock* NetworkFlowText, UTextBlock* BrownoutText, UTextBlock* FlowsText);  // parameters 0x40
};
