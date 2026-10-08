// /Game/ASS/VFX/ENV/Radiation/BP_Radiation_Sphere_01.BP_Radiation_Sphere_01_C
// Derives from: AActor > UObject
// size 0x250, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Radiation_Sphere_01_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radiation_Sphere_01;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0238, size 0x8
    UPROPERTY() float OPacity_NewTrack_0_5BAC778644436C310C7B15A254278562;  // 0x0240, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> OPacity__Direction_5BAC778644436C310C7B15A254278562;  // 0x0244, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* OPacity;  // 0x0248, size 0x8

    UFUNCTION(BlueprintCallable) void BlendIn();
    UFUNCTION() void ExecuteUbergraph_BP_Radiation_Sphere_01(int32 EntryPoint);  // parameters 0x4
    UFUNCTION() void OPacity__FinishedFunc();
    UFUNCTION() void OPacity__UpdateFunc();
    UFUNCTION(BlueprintCallable) void SetEffectSize(int32 Radius);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetIsMoving(bool isMoving);  // parameters 0x1
};
