// /Script/Icarus.DeployableComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0xE0, declared in Icarus/Source/Icarus/Traits/DeployableComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UDeployableComponent : public UTraitComponent
{
public:
    UPROPERTY(BlueprintAssignable) FOnDeployedSignature OnDeployed;  // 0x00D0, size 0x1
    UPROPERTY(BlueprintReadWrite) EIcarusItemContext SpawnContext;  // 0x00D1, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UNavModifierComponent* NavModifierComponent;  // 0x00D8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetDeployableData(FDeployableData& OutData) const;  // parameters 0xA9
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, BlueprintNativeEvent) void Multicast_DeploySuccess(ADeployable* SpawnedDeployable);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Server_RequestDeploy(FTransform DeployTransform, AActor* FoundationActor, FItemData ItemData, int32 VariantIndex, FName DynamicAttachmentSocket);  // parameters 0x234

    // Virtual functions that start here:
    //   Multicast_DeploySuccess_Implementation, Server_RequestDeploy_Implementation
};
