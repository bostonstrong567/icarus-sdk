// /Game/BP/DropShipEditor/UMG_DropShipAttributeDisplay.UMG_DropShipAttributeDisplay_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DropShipAttributeDisplay_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropShipAttribute_C* Fuel;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropShipAttribute_C* Mobility;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropShipAttribute_C* ProcessingPower;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropShipAttribute_C* Seats;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropShipAttribute_C* Storage;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropShipAttribute_C* Thrust;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropShipAttribute_C* Vehicles;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropShipAttribute_C* Weight;  // 0x0298, size 0x8

    UFUNCTION(BlueprintCallable) void UpdateVariables();
};
