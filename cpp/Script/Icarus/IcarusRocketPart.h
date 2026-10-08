// /Script/Icarus.IcarusRocketPart
// Derives from: AIcarusItem > AIcarusActor > AActor > UObject
// size 0x590, declared in Icarus/Source/Icarus/ShipEditor/IcarusRocketPart.h

UCLASS(Config=Engine)
class AIcarusRocketPart : public AIcarusItem
{
public:
    UPROPERTY(BlueprintReadWrite) int32 PartIdentifier;  // 0x0580, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    TArray<FRocketPartConnection,TSizedDefaultAllocator<32> > Connectors;  // 0x0570, protected

    UFUNCTION(BlueprintCallable) void DestroyAllConnections();
    UFUNCTION(BlueprintCallable) void FindConnectableConnector(AIcarusRocketPartConnector* OtherConnector, AIcarusRocketPartConnector*& Connector);  // parameters 0x10
    UFUNCTION(BlueprintCallable) FName GetChildSocketName(AIcarusRocketPartConnector* Connector);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetClosestConnection(FVector HitLocation, AIcarusRocketPartConnector*& ClosestConnection);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetConnectionCount();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetPartIdentifier() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool IsConnected();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void SetEditorHighlight(bool Highlight);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void SetEditorInteractable(bool Interactable);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPartIdentifier(int32 ID);  // parameters 0x4
};
