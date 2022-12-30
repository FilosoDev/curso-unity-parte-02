﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ControlaInterface : MonoBehaviour {

    private ControlaJogador scriptControlaJogador;
    public Slider SliderVidaJogador;

	// Use this for initialization
	void Start () {
        scriptControlaJogador = GameObject.FindWithTag("Jogador")
                                .GetComponent<ControlaJogador>();
        SliderVidaJogador.maxValue = scriptControlaJogador.Vida;
        AtualizarSliderVidaJogador();
	}
	
	// Update is called once per frame
	void Update () {
        
	}

    public void AtualizarSliderVidaJogador()
    {
        SliderVidaJogador.value = scriptControlaJogador.Vida;
    }
}
