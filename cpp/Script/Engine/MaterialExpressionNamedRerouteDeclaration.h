// /Script/Engine.MaterialExpressionNamedRerouteDeclaration
// Derives from: UMaterialExpressionNamedRerouteBase > UMaterialExpressionRerouteBase > UMaterialExpression > UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionNamedReroute.h

UCLASS()
class UMaterialExpressionNamedRerouteDeclaration : public UMaterialExpressionNamedRerouteBase
{
public:
    UPROPERTY() FExpressionInput Input;  // 0x0040, size 0x14
    UPROPERTY(EditAnywhere) FName Name;  // 0x0054, size 0x8
    UPROPERTY() FGuid VariableGuid;  // 0x005C, size 0x10
};
