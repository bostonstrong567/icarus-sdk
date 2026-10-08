// /Game/BP/MiscConstructs/BP_AudioFunctionLibrary.BP_AudioFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_AudioFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetDamageTypeFMODParam(EIcarusDamageType DamageType, UObject* __WorldContext, EDamageTypeFMODParam& FMODParamValue);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetPlayerTypeFMODParam(AIcarusPlayerCharacter* Player, UObject* __WorldContext, EPlayerTypeFMODParam& PlayerTypeFMODParam);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetSurfaceFMODParam(TEnumAsByte<EPhysicalSurface> Surface, UObject* __WorldContext, ESurfaceFMODParam& SurfaceFMODParam);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static void IsPlayerInAudioPerspective(AIcarusPlayerCharacter* Player, TEnumAsByte<EAudioPlayerPerspective> Perspective, UObject* __WorldContext, bool& Result);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static void SetFMODAudioComponentEvent(UFMODAudioComponent* AudioComponent, UFMODEvent* Event, bool SetPlayStatePlaying, UObject* __WorldContext);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void SetPlayerTypeParameter(FFMODEventInstance EventInstance, AIcarusPlayerCharacter* Player, UObject* __WorldContext);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void SetPlayerTypeParameterAttached(UFMODAudioComponent* AudioComponent, AIcarusPlayerCharacter* Player, UObject* __WorldContext);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void ShouldHitAudioBeSuppressedByCritZone(FHitResult& Hit, const TArray<EIcarusDamageType>& DamageTypes, UObject* __WorldContext, bool& Result);  // parameters 0xA1
};
