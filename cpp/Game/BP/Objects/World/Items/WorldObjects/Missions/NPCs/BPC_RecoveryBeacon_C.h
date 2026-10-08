// /Game/BP/Objects/World/Items/WorldObjects/Missions/NPCs/BPC_RecoveryBeacon.BPC_RecoveryBeacon_C
// Derives from: UActorComponent > UObject
// size 0xC8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBPC_RecoveryBeacon_C : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRecoveryBeaconsRowHandle BeaconRow;  // 0x00B0, size 0x18
};
