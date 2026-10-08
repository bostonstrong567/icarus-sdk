// /Game/BP/LocationMarkers/BP_MapSearchArea.BP_MapSearchArea_C
// Derives from: AMapSearchAreaProxy > AIcarusActor > AActor > UObject
// size 0x309, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MapSearchArea_C : public AMapSearchAreaProxy
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* BPQC_SearchArea;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_RadarSquare_C* Widget;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x0308, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_MapSearchArea(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitSearchAreaData();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
