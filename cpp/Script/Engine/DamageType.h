// /Script/Engine.DamageType
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/DamageType.h

UCLASS(Const, MinimalAPI)
class UDamageType : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCausedByWorld : 1;  // 0x0028, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bScaleMomentumByMass : 1;  // 0x0028, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bRadialDamageVelChange : 1;  // 0x0028, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float DamageImpulse;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float DestructibleImpulse;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float DestructibleDamageSpreadScale;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float DamageFalloff;  // 0x0038, size 0x4
};
