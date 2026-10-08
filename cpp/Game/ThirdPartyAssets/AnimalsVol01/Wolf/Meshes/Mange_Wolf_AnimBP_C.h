// /Game/ThirdPartyAssets/AnimalsVol01/Wolf/Meshes/Mange_Wolf_AnimBP.Mange_Wolf_AnimBP_C
// Derives from: USK_Wolf_AnimBP_C > UIcarusCreatureAnimInstance > UIcarusAnimInstance > UAnimInstance > UObject
// size 0x1B58, a blueprint class, anim

UCLASS(Transient, Config=Engine)
class UMange_Wolf_AnimBP_C : public USK_Wolf_AnimBP_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x1B50, size 0x8

    UFUNCTION() void ExecuteUbergraph_Mange_Wolf_AnimBP(int32 EntryPoint);  // parameters 0x4
};
