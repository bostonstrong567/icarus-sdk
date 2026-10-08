// /Script/Icarus.IcarusRocketPartConnector
// Derives from: AIcarusItem > AIcarusActor > AActor > UObject
// size 0x590, declared in Icarus/Source/Icarus/ShipEditor/IcarusRocketPartConnector.h

UCLASS(Config=Engine)
class AIcarusRocketPartConnector : public AIcarusItem
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ERocketPartConnectionType ConnectionType;  // 0x0570, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) AIcarusRocketPartConnector* AttachedConnector;  // 0x0578, size 0x8
    UPROPERTY(BlueprintAssignable) FConnectionUpdated ConnectionUpdated;  // 0x0580, size 0x1

    UFUNCTION(BlueprintCallable) bool CanEstablishConnection(AIcarusRocketPartConnector* OtherConnector);  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool DestroyConnection();  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool EstablishConnection(AIcarusRocketPartConnector* OtherConnector);  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool IsConnected();  // parameters 0x1
};
