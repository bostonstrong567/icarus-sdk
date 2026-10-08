// /Script/Icarus.FirearmChargeData
// size 0x20, declared in Icarus/Source/Icarus/DataStructs/Tools/FirearmData.h

USTRUCT()
struct FFirearmChargeData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCanCharge;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChargeSpeed;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UnchargeSpeed;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinimumChargeRequired;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bFireCanCharge;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAimCanCharge;  // 0x0011, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bReloadCanCancel;  // 0x0012, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* LaunchForceMultiplier;  // 0x0018, size 0x8
};
