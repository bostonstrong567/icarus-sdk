// /Script/AIModule.AISenseConfig_Sight
// Derives from: UAISenseConfig > UObject
// size 0x70, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISenseConfig_Sight.h

UCLASS(EditInlineNew, Config=Game)
class UAISenseConfig_Sight : public UAISenseConfig
{
public:
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) TSubclassOf<UAISense_Sight> Implementation;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) float SightRadius;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) float LoseSightRadius;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) float PeripheralVisionAngleDegrees;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) FAISenseAffiliationFilter DetectionByAffiliation;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) float AutoSuccessRangeFromLastSeenLocation;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) float PointOfViewBackwardOffset;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) float NearClippingRadius;  // 0x0068, size 0x4
};
