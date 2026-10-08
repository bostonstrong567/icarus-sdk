// /Game/UI/Compass/IcarusCompassWaypoint.IcarusCompassWaypoint_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x270, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UIcarusCompassWaypoint_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_Waypoint;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusWaypointActor_C* LinkedWaypoint;  // 0x0268, size 0x8
};
