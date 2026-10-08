// /Game/BP/Objects/World/Delivery/BP_Norex_Pod.BP_Norex_Pod_C
// Derives from: ABP_Transport_Pod_Base_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x538, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Norex_Pod_C : public ABP_Transport_Pod_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* Widget1;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* Widget;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight1;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x04F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NPC;  // 0x0500, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x0508, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh3;  // 0x0510, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh2;  // 0x0518, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh1;  // 0x0520, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0528, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Device;  // 0x0530, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Norex_Pod(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnTakeOff();
    UFUNCTION(BlueprintCallable) void PodLandedEvent();
    UFUNCTION(BlueprintCallable) void ShowMeshes();
    UFUNCTION(BlueprintCallable) void TakeOff();
};
