// /Script/Icarus.FirearmStaminaData
// size 0x8, declared in Icarus/Source/Icarus/DataStructs/Tools/FirearmData.h

USTRUCT()
struct FFirearmStaminaData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StaminaChargeCost;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StaminaChargeHoldCost;  // 0x0004, size 0x4
};
