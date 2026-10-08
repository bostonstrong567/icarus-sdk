// /Game/UI/Vehicle/UMG_VehiclePaperDoll_Wheel.UMG_VehiclePaperDoll_Wheel_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_VehiclePaperDoll_Wheel_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Suspension;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Tire;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Wheel;  // 0x0270, size 0x8
};
