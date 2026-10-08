// /Game/UI/Compass/IcarusCompassWidget.IcarusCompassWidget_C
// Derives from: UIcarusCompassWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x331, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UIcarusCompassWidget_C : public UIcarusCompassWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CompassContainer;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CompassFrame;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CompassOverlay;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* DialImageWidget;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* RetainerBox_EdgeTransparency;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* SearchAreaHighlight;  // 0x0308, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* Dynamic_Mat;  // 0x0310, size 0x8, named "Dynamic Mat"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusCompassWaypoint_C* CompassWaypointWidgets;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_IcarusCompassIcon_C*> AddedIconWidgets;  // 0x0320, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SetSearchAreaHighlight;  // 0x0330, size 0x1

    UFUNCTION(BlueprintCallable) void AddWaypoint(UIcarusMapIconComponent* MapIcon);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void AddWaypointComponent(UIcarusMapIconComponent* MapIconComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckSearchAreaHighlight();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_IcarusCompassWidget(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RemoveWaypoint(UIcarusCompassIcon* CompassWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void RemoveWaypointComponent(UIcarusMapIconComponent* MapIconComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RemoveWaypointComponentOld(UIcarusMapIconComponent* MapIconComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void RemoveWaypointWidget(UIcarusCompassIcon* CompassIcon);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void ShouldDisplayIcon(UIcarusMapIconComponent* IconComponent, bool& ShouldDisplay);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void StatsUpdated();
};
