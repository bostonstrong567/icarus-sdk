// /Game/Prototypes/SpaceStationPlayer/BP_SpaceStationHUD.BP_SpaceStationHUD_C
// Derives from: AIcarusHUD > AHUD > AActor > UObject
// size 0x3D0, a blueprint class, blueprint

UCLASS(Transient, NotPlaceable, Config=Game)
class ABP_SpaceStationHUD_C : public AIcarusHUD
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x03C8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SpaceStationHUD(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
