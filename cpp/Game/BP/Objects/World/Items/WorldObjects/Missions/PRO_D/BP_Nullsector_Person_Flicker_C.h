// /Game/BP/Objects/World/Items/WorldObjects/Missions/PRO_D/BP_Nullsector_Person_Flicker.BP_Nullsector_Person_Flicker_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x349, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Nullsector_Person_Flicker_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SpotlightStaticMesh;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Person;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x0340, size 0x8
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) bool Trigger;  // 0x0348, size 0x1

    UFUNCTION(BlueprintCallable) void DoTrigger();
    UFUNCTION() void ExecuteUbergraph_BP_Nullsector_Person_Flicker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
