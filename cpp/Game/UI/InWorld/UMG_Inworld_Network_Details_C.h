// /Game/UI/InWorld/UMG_Inworld_Network_Details.UMG_Inworld_Network_Details_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Inworld_Network_Details_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* WaveProgressAnimation;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* BorderAnimation;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DemandText;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* NetworkActive;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NetworkInactive;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StorageText;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SupplyText;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TypeText;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventorySeperator_C* UMG_InventorySeperator;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventorySeperator_C* UMG_InventorySeperator_1;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventorySeperator_C* UMG_InventorySeperator_2;  // 0x02B8, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Inworld_Network_Details(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Update(BPS_FlowMeterData Data);  // parameters 0x28
};
